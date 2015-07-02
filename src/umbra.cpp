#include <QtWidgets>
#include <QtNetwork>
#include <QtMultimedia/QSound>
#include <QtMultimedia/QSoundEffect>
#include <QSignalMapper>
#include <utility>

#include "profile.h"
#include "ui_profile.h"
#include "settings.h"
#include "ui_settings.h"
#include "messenger.h"
#include "ui_messenger.h"
#include "umbra.h"
#include "ui_umbra.h"
#include "crypto.h"
#include "constructors.h"

meshh::meshh(QWidget *parent) : QMainWindow(parent, Qt::FramelessWindowHint), ui(new Ui::meshh) {
    ui->setupUi(this);
    std::srand(unsigned(std::time(0)));

    umbraConfig tmpconf = ReadConfig();
    this->conf = new umbraConfig;
    this->conf->displayName = tmpconf.displayName;
    this->conf->displayImg = tmpconf.displayImg;
    this->conf->privacyLevel = tmpconf.privacyLevel;
    this->conf->listenPort = tmpconf.listenPort;
    this->conf->themeColor = tmpconf.themeColor;
    this->conf->indexName = tmpconf.indexName;

    updateColor();
    this->loadMyProfile();

    this->posts = new std::vector<newsPost>;
    this->friends = new std::vector<friendInfo>;
    this->privatekeys = new std::vector<QString>;
    this->conversessions = new std::vector<QHostAddress>;
    this->msgsPending = new std::vector<QString>;
    this->tcpData = new QByteArray();
    this->profiles = new std::vector<profileInfo>;

    ui->scrollArea->widget()->setLayout(ui->verticalLayout);
    ui->verticalLayout->setAlignment(Qt::AlignTop);
    ui->friendsFrame->widget()->setLayout(ui->friendList);
    ui->verticalLayoutWidget_2->setStyleSheet("background-color: rgba(0,0,0,0); padding:3px;");
    ui->friendList->setAlignment(Qt::AlignTop);

    udpSocket = new QUdpSocket(this);
    udpSocket->bind(this->conf->listenPort, QUdpSocket::ShareAddress);
    connect(udpSocket, SIGNAL(readyRead()), this, SLOT(processPendingDatagrams()));

    tcpServer = new QTcpServer(this);
    connect(tcpServer, SIGNAL(newConnection()), this, SLOT(newTcpConnection()));
    tcpServer->listen(QHostAddress::Any, this->conf->listenPort);

    ui->displayname->setText(this->conf->displayName);
    ui->displayname->setMinimumWidth(this->conf->displayName.length() * 9);
    ui->displayname->setToolTip("<img src='shhdir/images/pepe.jpg' width='256' height='256'>");
    ui->postFrame->hide();
    ui->friendsFrame->hide();
    ui->addFriendFrame->hide();
    ui->alertFrame->hide();
    if (debug==false)
        ui->statusBar->hide();
    ui->searchBox->hide();
    ui->searchEnterButton->hide();

    this->onlineFriends = 0;
    this->hiFriends();
    this->populateLocalPosts();
    this->requestStream();
    this->loadMyProfile();

    connect(ui->postShowButton, SIGNAL(clicked()), this, SLOT(revealPostFrame()));
    connect(ui->xButton, SIGNAL(clicked()), this, SLOT(end()));
    connect(ui->streamButton, SIGNAL(clicked()), this, SLOT(requestStream()));
    connect(ui->postEnterButton, SIGNAL(clicked()), this, SLOT(addPost()));
    connect(ui->friendsShowButton, SIGNAL(clicked()), this, SLOT(revealFriendsFrame()));
    connect(ui->addFriendButton, SIGNAL(clicked()), this, SLOT(revealAddFriendFrame()));
    connect(ui->confirmFriendButton, SIGNAL(clicked()), this, SLOT(reqFriend()));
    connect(this->m.ui->pushButton, SIGNAL(clicked()), this, SLOT(sendMsg()));
    connect(ui->settingsButton, SIGNAL(clicked()), this, SLOT(openSettings()));
    connect(ui->searchEnterButton, SIGNAL(clicked()), this, SLOT(askDuke()));
    connect(ui->searchButton, SIGNAL(clicked()), this, SLOT(openSearchBox()));

    QSignalMapper *signalMapper = new QSignalMapper(this);
    signalMapper->setMapping(ui->profileButton, QString(this->conf->displayName));
    connect(ui->profileButton, SIGNAL(clicked()), &*signalMapper, SLOT(map()));
    connect(signalMapper, SIGNAL(mapped(QString)), this, SLOT(openProfile(QString)));
    haveKey();
}

meshh::~meshh() { delete ui; }

void meshh::end() {
    //read posts.shh and send posts
    std::string line;
    std::string pth = "shhdir/friends.shh";
    std::ifstream myfile (pth.c_str());
    if (myfile.is_open()) {
        while ( std::getline (myfile,line) ) {
            QString s0;
            QString s1;
            QString s2;
            QByteArray datagram;
            s0.append("0x01:BYE");
            datagram.append(s0);
            s1.append(line.c_str());
            s2.append(s1.section(":", 1, 1));
            QHostAddress addr;
            addr.setAddress(s2.section(",", 0, 0));
            qint16 prt=s2.section(",", 1, 1).toUInt();
            udpSocket->writeDatagram(datagram.data(), datagram.size(), addr, prt);
        }
    }
    QString path = "cache";
    QDir dir(path);
    dir.setNameFilters(QStringList() << "*.*");
    dir.setFilter(QDir::Files);
    foreach(QString dirFile, dir.entryList()) {
        dir.remove(dirFile);
    }
    exit(0);
}

void meshh::processPendingDatagrams()
{
    while (udpSocket->hasPendingDatagrams()) {
        QByteArray datagram;
        datagram.resize(udpSocket->pendingDatagramSize());
        QHostAddress host;
        short unsigned int sndprt;
        udpSocket->readDatagram(datagram.data(), datagram.size(), &host, &sndprt);
        QString recv = datagram.data();
        if (recv.section(":", 0, 0) == "0x03") {
            bool found = false;
            for (std::vector<friendInfo>::iterator it = this->friends->begin(); it != this->friends->end(); it++) {
                friendInfo tmp = *it;
                if (tmp.IP == host && tmp.portnum == sndprt) {
                    this->sendPostData(host, sndprt);
                    tmp.online = true;
                    QString sbarmsg;
                    if (tmp.publickey != recv.section(":", 3, 3)) {
                        sbarmsg.append(tmp.username);
                        sbarmsg.append(" has an unfamiliar public key.");
                        this->alert(sbarmsg, "gray");
                        tmp.publickey = recv.section(":", 3, 3);
                    }
                    else
                    {
                        sbarmsg.append(tmp.username);
                        sbarmsg.append(" is now online.");
                        this->alert(sbarmsg, "green");
                    }
                    *it = tmp;
                    this->refreshFriends();
                    found = true;
                }
            }
            if (!found) {
                friendInfo pnd(recv.section(":", 2, 2), host.toString(), QString::number(sndprt), true);
                this->p_friend = pnd;
                QString txt;
                txt.append(pnd.username);
                txt.append(" (");
                txt.append(pnd.IP.toString());
                txt.append(") wishes to see your posts.");
                ui->alertText->setText(txt);
                connect(ui->acceptButton, SIGNAL(clicked()), this, SLOT(acceptFriend()));
                connect(ui->declineButton, SIGNAL(clicked()), this, SLOT(declineFriend()));
                ui->alertFrame->show();
            }
        }
        if (recv.section(":", 0, 0) == "0x02") {
            for (std::vector<friendInfo>::iterator it = this->friends->begin(); it != this->friends->end(); it++) {
                friendInfo tmp = *it;
                QString tmpstr = recv.section(":", 1, 1);
                if (tmp.IP == host && tmp.portnum == sndprt) {
                    QString timestamp;
                    QString purestamp = tmpstr.section(";", 1, 1);
                    timestamp.append(purestamp.section("-", 0, 0));
                    timestamp.append(" at ");
                    timestamp.append(purestamp.section("-", 1, 1).section("/", 0, 0));
                    timestamp.append(":");
                    timestamp.append(purestamp.section("-", 1, 1).section("/", 1, 1));
                    QDateTime datetimmy;
                    datetimmy = QDateTime::fromString(purestamp, "MM/dd/yyyy-hh/mm");
                    newsPost pst(tmp.username, timestamp, tmpstr.section(";", 3, 3), datetimmy);
                    this->posts->push_back(pst);
                    tmp.online = true;
                    *it = tmp;
                    this->refreshFriends();
                    QString tmp2;
                    int n0 = ui->newPosts->text().toUInt();
                    n0++;
                    tmp2.append(QString::number(n0));
                    ui->newPosts->setText(tmp2);
                    QString sbarmsg;
                    sbarmsg.append(tmp.username);
                    sbarmsg.append(" is now online.");
                    this->alert(sbarmsg, "green");
                }
            }
        }
        if (recv.section(":", 0, 0) == "0x01") {
            for (std::vector<friendInfo>::iterator it = this->friends->begin(); it != this->friends->end(); it++) {
                friendInfo tmp = *it;
                if (tmp.IP == host && tmp.portnum == sndprt) {
                    tmp.online = false;
                    *it = tmp;
                    this->refreshFriends();
                    QString sbarmsg;
                    sbarmsg.append(tmp.username);
                    sbarmsg.append(" is now offline.");
                    this->alert(sbarmsg, "gray");
                }
            }
        }
        if (recv.section(":", 0, 0) == "0x04") {
            QString txt;
            txt.append("Your request for post data from '");
            txt.append(host.toString());
            txt.append("' has been denied.");
            this->alert(txt, "red");
        }
        if (recv.section(":", 0, 0) == "0x05") {
            for (std::vector<friendInfo>::iterator it = this->friends->begin(); it != this->friends->end(); it++){
                if (it->IP == host && it->portnum == sndprt) {
                    bool found = false;
                    for (std::vector<QHostAddress>::iterator it2 = this->conversessions->begin(); it2 != this->conversessions->end(); it2++) {
                        if (*it2 == host) {
                            it->msgs->push_back(recv.section(":", 1, 1));
                            QString alertstr;
                            alertstr.append(it->username);
                            alertstr.append(": ");
                            alertstr.append(recv.section(":", 1, 1));
                            this->m.ui->messageHistory->append(alertstr);
                            this->alert(alertstr, "green");
                            found = true;
                        }
                    }
                    if (!found) {
                        QString pndstr(it->username);
                        pndstr.append(":");
                        pndstr.append(recv.section(":", 1, 1));
                        this->msgsPending->push_back(pndstr);
                        QString alertstr;
                        alertstr.append("Chat request from ");
                        alertstr.append(it->username);
                        this->alert(alertstr, "gray");
                        ui->acceptButton->show();
                        connect(ui->acceptButton, SIGNAL(clicked()), this, SLOT(processPendingMessages()));
                    }
                }
            }
        }
        if (recv.section(":", 0, 0) == "0x06") {
            bool found = false;
            for (std::vector<friendInfo>::iterator it = this->friends->begin(); it != this->friends->end(); it++){
                if (it->IP == host && it->portnum == sndprt) {
                    friendInfo inf = *it;
                    this->sendPicture(this->myInfo->avatar, inf);
                    this->sendProfile(inf.IP, inf.portnum);
                    found = true;
                }
            }
            if (!found)
                this->alert("Unauthorized user requested access to your profile. (" + host.toString() + ")", "red");
        }
        if (recv.section(":", 0, 0) == "0x07") {
            bool found = false;
            for (std::vector<profileInfo>::iterator it = this->profiles->begin(); it != this->profiles->end(); it++) {
                profileInfo tmp = *it;
                if (tmp.inf.username == findFriend(host).username) {
                    QStringList split = recv.split(";");
                    foreach (const QString &str, split) {
                        if (str.section("=", 0, 0)=="AGE")
                            tmp.age = str.section("=", 1, 1).toUInt();
                        if (str.section("=", 0, 0)=="CITY")
                            tmp.city = str.section("=", 1, 1);
                        if (str.section("=", 0, 0)=="STATE")
                            tmp.state = str.section("=", 1, 1);
                        if (str.section("=", 0, 0)=="OCC")
                            tmp.occupation = str.section("=", 1, 1);
                        if (str.section("=", 0, 0)=="EMAIL")
                            tmp.email = str.section("=", 1, 1);
                        if (str.section("=", 0, 0)=="TCODE")
                            tmp.themecode = str.section("=", 1, 1);
                    }
                    found = true;
                }
                *it = tmp;
            }
            if (!found) {
                profileInfo *info = new profileInfo();
                info->inf = findFriend(host);
                QStringList split = recv.split(";");
                foreach (const QString &str, split) {
                    if (str.section("=", 0, 0)=="AGE")
                        info->age = str.section("=", 1, 1).toUInt();
                    if (str.section("=", 0, 0)=="CITY")
                        info->city = str.section("=", 1, 1);
                    if (str.section("=", 0, 0)=="STATE")
                        info->state = str.section("=", 1, 1);
                    if (str.section("=", 0, 0)=="OCC")
                        info->occupation = str.section("=", 1, 1);
                    if (str.section("=", 0, 0)=="EMAIL")
                        info->email = str.section("=", 1, 1);
                    if (str.section("=", 0, 0)=="TCODE")
                        info->themecode = str.section("=", 1, 1);
                }
                this->profiles->push_back(*info);
            }
        }
        if (recv.section(":", 0, 0) == "0x08") {
            this->alert(QString(recv.section(":", 1, 1) + ":" + recv.section(":", 2, 2)), "green");
        }
        if (recv.section(":", 0, 0) == "0x09") {
            this->alert(recv.section(":", 1, 1), "red");
        }
        //else { QString temp("Unhandled datagram received: "); temp.append(datagram.data()); this->alert(temp, "red"); }
    }
}

void meshh::processTcpData() {
    QDataStream in(tcpSocket);
    int msgSize = -1;
    if (tcpSocket->bytesAvailable() && msgSize == -1) {
        in >> msgSize;
    }
    while (tcpSocket->bytesAvailable() < msgSize-sizeof(int)) {
        if (!tcpSocket->waitForReadyRead(100)) {
            tcpSocket->disconnectFromHost();
            break;
        }
    }
    QImage img;
    in >> img;
    QString fname = "cache/" + QString::number(qrand()) + ".jpg";
    img.save(fname);
    profileInfo *info = new profileInfo();
    info->avatar = fname;
    friendInfo tmp = findFriend(this->pndfrnd);
    friendInfo *newfrnd = new friendInfo();
    newfrnd->username = tmp.username;
    info->inf = *newfrnd;
    bool found = false;
    for (std::vector<profileInfo>::iterator it = this->profiles->begin(); it != this->profiles->end(); ++it) {
        if (!found) {
            profileInfo ptmp = *it;
            if (ptmp.inf.username == tmp.username) {
                if (ptmp.avatar == "") {
                    ptmp.avatar = fname;
                    found = true;
                    *it = ptmp;
                }
            }
        }
    }
    if (!found)
        this->profiles->push_back(*info);
}

void meshh::newTcpConnection() {
    tcpSocket = tcpServer->nextPendingConnection();
    connect(tcpSocket, SIGNAL(readyRead()), this, SLOT(processTcpData()));
}

void meshh::sendPicture(QString path, friendInfo inf) {
    tcpSocket = new QTcpSocket(this);
    tcpSocket->connectToHost(inf.IP, inf.portnum);
    tcpSocket->waitForConnected(1000);
    QImage image(path);
    QByteArray buffer;
    QDataStream out(&buffer, QIODevice::WriteOnly);
    out << int(0);
    out << image;
    out.device()->seek(0);
    out << buffer.size();
    tcpSocket->write(buffer);
}

void meshh::askDuke(QString uname) {
    QByteArray out;
    out.append("REQ:");
    out.append(uname);
    udpSocket->writeDatagram(out.data(), out.size(), QHostAddress("umbraduke.ddns.net"), 1974);
}

void meshh::askDuke() {
    QByteArray out;
    out.append("REQ:");
    out.append(ui->searchBox->text());
    udpSocket->writeDatagram(out.data(), out.size(), QHostAddress("umbraduke.ddns.net"), 1974);
}

void meshh::requestProfile(QString uname) {
    friendInfo inf = this->findFriend(uname);
    this->pndfrnd = inf.username;
    QByteArray datagram;
    QString out("0x06:REQPROFILE");
    datagram.append(out);
    udpSocket->writeDatagram(datagram.data(), datagram.size(), inf.IP, inf.portnum);
    this->askDuke("nothawthorne@umbranet");
}

void meshh::processPendingMessages() {
    for (std::vector<QString>::iterator it = this->msgsPending->begin(); it != this->msgsPending->end(); ++it) {
        QString itstr = *it;
        QString uname(itstr.section(":", 0, 0));
        QString msg(itstr.section(":", 1, 1));
        friendInfo tmp = findFriend(uname);
        bool found = false;
        for (std::vector<QHostAddress>::iterator it2 = this->conversessions->begin(); it2 != this->conversessions->end(); it2++){
            if (*it2 == tmp.IP) { found = true; }
        }
        tmp.msgs->push_back(msg);
        if (!found) {
            this->conversessions->push_back(tmp.IP);
            this->newMessageSession(tmp.username);
        }
        this->loadMsgHistory(uname);
    }
}

bool meshh::findFriend(friendInfo inf) {
    for (std::vector<friendInfo>::iterator it = this->friends->begin(); it != this->friends->end(); it++){
        if (it->username == inf.username) { return true; }
    }
    return false;
}

friendInfo meshh::findFriend(QString namestr) {
    for (std::vector<friendInfo>::iterator it = this->friends->begin(); it != this->friends->end(); it++){
        if (it->username == namestr) { return *it; }
    }
    return(friendInfo());
}

friendInfo meshh::findFriend(QHostAddress inf) {
    for (std::vector<friendInfo>::iterator it = this->friends->begin(); it != this->friends->end(); it++){
        if (it->IP == inf) { return *it; }
    }
    return(friendInfo());
}

void meshh::acceptFriend() {
    ui->alertFrame->hide();
    if (!findFriend(this->p_friend)) {
        this->sendPostData(this->p_friend.IP, this->p_friend.portnum);
        this->saveFriend(this->p_friend);
        this->refreshFriends();
        QString tmp;
        tmp.append("Added '");
        tmp.append(this->p_friend.username);
        tmp.append("' to friends.");
        ui->statusBar->showMessage(tmp);
    }
}

void meshh::declineFriend() {
    ui->alertFrame->hide();
    QByteArray datagram;
    datagram.append("0x04:NO");
    udpSocket->writeDatagram(datagram.data(), datagram.size(), this->p_friend.IP, this->p_friend.portnum);
}

void meshh::closeAlert() {
    ui->acceptButton->show();
    ui->alertFrame->hide();
}

void meshh::sendPostData(QHostAddress addr, short unsigned int prt) {
    //read posts.shh and send posts
    std::string line;
    std::string pth = "shhdir/posts.shh";
    std::ifstream myfile (pth.c_str());
    if (myfile.is_open()) {
        while ( std::getline (myfile,line) ) {
            QString s0;
            QByteArray datagram;
            s0.append("0x02:");
            s0.append(line.c_str());
            datagram.append(s0);
            udpSocket->writeDatagram(datagram.data(), datagram.size(), addr, prt);
        }
    }
}

void meshh::hiFriends() {
    //read posts.shh and send posts
    std::string line;
    std::string pth = "shhdir/friends.shh";
    std::ifstream myfile (pth.c_str());
    if (myfile.is_open()) {
        while ( std::getline (myfile,line) ) {
            QString s0;
            QString s1;
            QString s2;
            QByteArray datagram;
            s0.append("0x03:REQPOSTS:");
            s0.append(this->conf->displayName);
            s0.append(":");
            s0.append(myKey());
            datagram.append(s0);
            s1.append(line.c_str());
            if (s1.section(":", 1, 1) != NULL) {
                s2.append(s1.section(":", 1, 1));
                QHostAddress addr;
                addr.setAddress(s2.section(",", 0, 0));
                qint16 prt=s2.section(",", 1, 1).toUInt();
                udpSocket->writeDatagram(datagram.data(), datagram.size(), addr, prt);
                friendInfo inf(s1.section(":", 0, 0), s2.section(",", 0, 0), s2.section(",", 1, 1), s2.section(",", 2, 2), false);
                this->friends->push_back(inf);
            }
        }
    }
}

void meshh::sendMsg() {
    if (this->m.ui->messageBox->toPlainText() != "") {
        std::string plaintext = this->m.ui->messageBox->toPlainText().toStdString();
        std::string ciphertext;

        friendInfo tmp = findFriend(this->m.ui->displayName1->text());
        QString s0;
        QString s1;
        QByteArray datagram;
        s0.append("0x05:");
        s0.append(this->m.ui->messageBox->toPlainText());
        datagram.append(s0);

        // // CRYPTO TESTING // // // // // // // //

        byte key[CryptoPP::AES::DEFAULT_KEYLENGTH], iv[CryptoPP::AES::BLOCKSIZE];
        memset(key, 0x00, CryptoPP::AES::DEFAULT_KEYLENGTH);
        memset(iv, 0x00, CryptoPP::AES::BLOCKSIZE);

        CryptoPP::AES::Encryption aesEncryption(key, CryptoPP::AES::DEFAULT_KEYLENGTH);
        CryptoPP::CBC_Mode_ExternalCipher::Encryption cbcEncryption(aesEncryption, iv);

        CryptoPP::StreamTransformationFilter stfEncryptor(cbcEncryption, new CryptoPP::StringSink(ciphertext));
        stfEncryptor.Put( reinterpret_cast<const unsigned char*>(datagram.data()), datagram.size());
        stfEncryptor.MessageEnd();

        QFile outfile;
        outfile.setFileName("ciphertext.shh");
        outfile.open(QIODevice::WriteOnly);
        outfile.write(ciphertext.c_str(), qstrlen(ciphertext.c_str()));
        outfile.close();

        // // CRYPTO TESTING // // // // // // // //

        udpSocket->writeDatagram(datagram.data(), datagram.size(), tmp.IP, tmp.portnum);
        s1.append(this->conf->displayName);
        s1.append(": ");
        s1.append(this->m.ui->messageBox->toPlainText());
        this->m.ui->messageHistory->append(s1);
        this->m.ui->messageBox->clear();
    }
}

void meshh::newMessageSession(QString str) {
    friendInfo tmp = findFriend(str);
    bool found = false;
    for (std::vector<QHostAddress>::iterator it = this->conversessions->begin(); it != this->conversessions->end(); it++){
        if (*it == tmp.IP) { found = true; }
    }
    if (!found)
        this->conversessions->push_back(tmp.IP);

    this->m.ui->displayName1->setText(str);
    this->m.ui->displayName1->adjustSize();
    QSignalMapper *signalMapper = new QSignalMapper(this);
    signalMapper->setMapping(this->m.ui->displayName1, QString(this->m.ui->displayName1->text()));
    connect(this->m.ui->displayName1, SIGNAL(clicked()), &*signalMapper, SLOT(map()));
    connect(signalMapper, SIGNAL(mapped(QString)), this, SLOT(openProfile(QString)));
    this->m.show();
    this->m.move(QCursor::pos());
}

void meshh::refreshFriends() {
    int n = 0;
    while (!ui->friendList->isEmpty()) {
        ui->friendList->itemAt(0)->widget()->hide();
        ui->friendList->removeItem(ui->friendList->itemAt(0));
    }
    std::vector<friendInfo> *fonline = new std::vector<friendInfo>;
    std::vector<friendInfo> *foffline = new std::vector<friendInfo>;
    for (std::vector<friendInfo>::iterator it = this->friends->begin(); it != this->friends->end(); it++) {
        friendInfo tmp = *it;
        if (tmp.online == true) { fonline->push_back(tmp); }
        else{ foffline->push_back(tmp);}
    }
    for (std::vector<friendInfo>::iterator it = fonline->begin(); it != fonline->end(); it++) {
        n++;
        QPushButton *lbl = new QPushButton;
        lbl->setText(it->username);
        lbl->setFlat(true);
        QFont fnt("NanumGothic", 11, 1, false);
        lbl->setFont(fnt);
        lbl->setStyleSheet("color: #eee;");
        lbl->setEnabled(true);
        ui->friendList->addWidget(lbl, 0, Qt::AlignTop);
    }
    for (std::vector<friendInfo>::iterator it = foffline->begin(); it != foffline->end(); it++) {
        QPushButton *lbl = new QPushButton;
        lbl->setText(it->username);
        lbl->setFlat(true);
        QFont fnt("NanumGothic", 11, 1, true);
        lbl->setFont(fnt);
        lbl->setStyleSheet("color: #bbb;");
        lbl->setEnabled(false);
        ui->friendList->addWidget(lbl, 0, Qt::AlignTop);
    }
    int cnt = ui->friendList->count() - 1;
    for (int i = 0; i<=cnt; i++) {
        QLayoutItem *item = ui->friendList->itemAt(i);
        QPushButton *but  = qobject_cast<QPushButton*>(item->widget());
        QSignalMapper *signalMapper = new QSignalMapper(this);
        signalMapper->setMapping(ui->friendList->itemAt(i)->widget(), QString(but->text()));
        connect(&*but, SIGNAL(clicked()), &*signalMapper, SLOT(map()));
        connect(signalMapper, SIGNAL(mapped(QString)), this, SLOT(newMessageSession(QString)));
        QSignalMapper *signalMapper2 = new QSignalMapper(this);
        signalMapper2->setMapping(ui->friendList->itemAt(i)->widget(), QString(but->text()));
        connect(&*but, SIGNAL(clicked()), &*signalMapper, SLOT(map()));
        connect(signalMapper, SIGNAL(mapped(QString)), this, SLOT(requestProfile(QString)));
    }
    ui->onlineFriends->setText(QString::number(fonline->size()));
}

void meshh::reqFriend() {
    QString write;
    friendInfo inf(ui->addName->text(), ui->addIP->text(), ui->addPort->text(), false);
    write.append(inf.username);
    write.append(":");
    write.append(inf.IP.toString());
    write.append(",");
    write.append(QString::number(inf.portnum));
    write.append(",");
    write.append("0");
    std::ofstream file;
    ui->addFriendFrame->hide();
    ui->friendsFrame->hide();
    file.open("shhdir/friends.shh", std::ios_base::out | std::ios_base::app);
    file << write.toStdString() << std::endl ;
    file.close();
    this->friends->push_back(inf);
}

void meshh::saveFriend(friendInfo inf) {
    QString write;
    write.append(inf.username);
    write.append(":");
    write.append(inf.IP.toString());
    write.append(",");
    write.append(QString::number(inf.portnum));
    write.append(",");
    write.append("0");
    std::ofstream file;
    file.open("shhdir/friends.shh", std::ios_base::out | std::ios_base::app);
    file << write.toStdString() << std::endl;
    file.close();
    this->friends->push_back(inf);
}

void meshh::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        dragPosition = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
}
void meshh::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton) {
        move(event->globalPos() - dragPosition);
        event->accept();
    }
}

umbraConfig meshh::ReadConfig() {
    umbraConfig *out = new umbraConfig();
    std::string line;
    std::string pth = "shhdir/conf.shh";
    std::ifstream myfile (pth.c_str());
    if (myfile.is_open()) {
        while ( std::getline (myfile,line) ) {
            QString s0;
            s0.append(line.c_str());
            if (s0.section("=", 0, 0).toStdString() == "displayname") {
                out->displayName = s0.section("=", 1, 1);
            }
            else if (s0.section("=", 0, 0).toStdString() == "port") {
                out->listenPort = s0.section("=", 1, 1).toUInt();
            }
            else if (s0.section("=", 0, 0).toStdString() == "privacylevel") {
                out->privacyLevel = s0.section("=", 1, 1).toUInt();
            }
            else if (s0.section("=", 0, 0).toStdString() == "displayimg") {
                out->displayImg = s0.section("=", 1, 1);
            }
            else if (s0.section("=", 0, 0).toStdString() == "themecolor") {
                out->themeColor = s0.section("=", 1, 1);
            }
            else if (s0.section("=", 0, 0).toStdString() == "debug") {
                if (s0.section("=", 1, 1) == "^^vv<><>AB$") { out->debug = true; }
            }
            else if (s0.section("=", 0, 0).toStdString() == "indexname") {
                out->indexName = s0.section("=", 1, 1);
            }
        }
    }
    myfile.close();
    return *out;
}

void meshh::addPost() {
    ui->postFrame->hide();
    QDateTime qdt(QDateTime::currentDateTime());
    QDate dt(qdt.date());
    QTime t(qdt.time());
    QString str;
    str.append("textPost;");
    QString stamp;
    stamp.append(QString::number(dt.month()));
    stamp.append("/");
    stamp.append(QString::number(dt.day()));
    stamp.append("/");
    stamp.append(QString::number(dt.year()));
    stamp.append("-");
    stamp.append(QString::number(t.hour()));
    stamp.append("/");
    stamp.append(QString::number(t.minute()));
    str.append(stamp);
    str.append(";0;");
    str.append(ui->postBox->toPlainText());
    str.append(";");
    std::ofstream file;
    file.open("shhdir/posts.shh", std::ios_base::out | std::ios_base::app);
    file << std::endl << str.toStdString();
    newsPost pst(this->conf->displayName, stamp, ui->postBox->toPlainText(), qdt);
    this->posts->push_back(pst);
    file.close();
}
void meshh::populateLocalPosts() {
    std::string line;
    std::string pth = "shhdir/posts.shh";
    std::ifstream myfile (pth.c_str());
    if (myfile.is_open()) {
        while ( std::getline (myfile,line) ) {
            QString s0;
            s0.append(line.c_str());
            if(s0.section(";", 0, 0).toStdString() == "textPost") {
                QString s1 = s0.section(";", 1, 1).section("-", 0, 0);
                QString s2 = s0.section(";", 1, 1).section("-", 1, 1).section("/", 0, 0);
                QString s3 = s0.section(";", 1, 1).section("-", 1, 1).section("/", 1, 1);
                QString timestamp;
                timestamp.append(s1);
                timestamp.append(" at ");
                timestamp.append(s2);
                timestamp.append(":");
                timestamp.append(s3);
                QDateTime datetimmy;
                datetimmy = QDateTime::fromString(s0.section(";", 1, 1), "MM/dd/yyyy-hh/mm");
                QString datestr = datetimmy.toString();
                newsPost pst(
                            this->conf->displayName,
                            timestamp,
                            s0.section(";", 3, 3),
                            datetimmy);
                this->posts->push_back(pst);
            }
        }
    }
    myfile.close();
}

void meshh::requestStream() {
    while (!ui->verticalLayout->isEmpty()) {
        ui->verticalLayout->removeItem(ui->verticalLayout->itemAt(0));
    }
    std::vector<std::pair<int, newsPost>> *ormap = new std::vector<std::pair<int, newsPost>>;
    for (std::vector<newsPost>::iterator it = this->posts->begin(); it != this->posts->end(); ++it) {
        newsPost tmp = *it;
        QDateTime tmpdt = tmp.dt;
        QDate tmpd = tmpdt.date();
        QTime tmpt = tmpdt.time();
        int dtsum = (tmpd.year() * 300) + (tmpd.month() * 30) + tmpd.day() + tmpt.hour() + tmpt.minute();
        ormap->push_back(std::pair<int, newsPost>(dtsum, tmp));
    }
    std::sort(ormap->begin(), ormap->end(), [](const std::pair<int,newsPost> &left, const std::pair<int,newsPost> &right) {
        return left.first > right.first;
    });
    for (std::vector<std::pair<int, newsPost>>::iterator it=ormap->begin(); it!=ormap->end(); ++it) {
        std::pair<int, newsPost> tmp = *it;
        recvPost(tmp.second);
    }
    ui->newPosts->setText("0");
}

void meshh::recvPost(newsPost postdata) {
    profileInfo pinf;
    if (postdata.username != this->conf->displayName) {
        pinf = findInfo(postdata.username);
    }
    else { pinf = *this->myInfo; }

    //HEADER
    QWidget *header = new QWidget;
    QWidget *out = new QWidget;
    out->setStyleSheet("border-style: solid; border-width: 1px; border-color: #9F94A7;");

    //AVATAR THUMB
    QHBoxLayout *hl = new QHBoxLayout;
    QFrame *picframe = new QFrame;
    QGraphicsView* w = new QGraphicsView();
    QGraphicsScene* scene = new QGraphicsScene(w);
    QPixmap pix(pinf.avatar);
    QPixmap pix2 = pix.scaled(64,64);
    picframe->setFrameRect(QRect(0,0,74,74));
    scene->setSceneRect(0,0,64,64);
    w->setScene(scene);
    w->setFixedSize(74, 74);
    scene->addPixmap(pix2);
    hl->setContentsMargins(0,0,0,0);
    w->setStyleSheet("border-width: 0px;");
    hl->addWidget(w, 0, Qt::AlignTop);

    //NAME BUTTON
    QVBoxLayout *l_postinfo = new QVBoxLayout;
    QWidget *postinfo = new QWidget;
    QPushButton *btn = new QPushButton;
    btn->setFlat(true);
    btn->setText(postdata.username);
    btn->setStyleSheet("QPushButton{text-align: left; border-width: 0px;} QPushButton:hover{ color: #ddd; }");

    //MAP BUTTON
    QSignalMapper *signalMapper = new QSignalMapper(this);
    signalMapper->setMapping(btn, QString(btn->text()));
    connect(btn, SIGNAL(clicked()), &*signalMapper, SLOT(map()));
    connect(signalMapper, SIGNAL(mapped(QString)), this, SLOT(openProfile(QString)));

    //ADD BUTTON
    l_postinfo->addWidget(btn, 0, Qt::AlignLeft);

    //DATESTAMP LABEL
    QLabel *datestamp = new QLabel;
    datestamp->setStyleSheet("font-family:ubuntu; font-size:11px; font-style:light; border-width: 0px;");
    datestamp->setText("posted on " + postdata.date);
    l_postinfo->addWidget(datestamp, 0, Qt::AlignLeft);
    l_postinfo->setSpacing(0);
    l_postinfo->setMargin(0);
    postinfo->setLayout(l_postinfo);
    postinfo->setStyleSheet("border-width: 0px;");
    postinfo->setMaximumHeight(35);
    hl->addWidget(postinfo, 0, Qt::AlignVCenter);

    //CONSTRUCT HEADER
    hl->setSpacing(0);
    hl->setMargin(0);
    header->setLayout(hl);
    header->setStyleSheet("background-color: #bbb; border-width: 0px;");

    //POST TEXT
    QLabel *lbl = new QLabel;
    lbl->setWordWrap(true);
    lbl->setFixedHeight(100);
    lbl->setText(postdata.txt);
    lbl->setAlignment(Qt::AlignTop);
    lbl->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    lbl->setStyleSheet("background-color: #bbb; padding:5px; border-width: 0px;");

    //BUILD FINAL LAYOUT
    QVBoxLayout *outvlo = new QVBoxLayout;
    outvlo->addWidget(header, 0, Qt::AlignTop);
    outvlo->addWidget(lbl, 0, Qt::AlignTop);

    //APPLY TO OUTWIDGET
    out->setLayout(outvlo);

    //OUT
    ui->verticalLayout->addWidget(out, 0, Qt::AlignTop);
}

void meshh::revealPostFrame() {
    ui->addFriendFrame->hide();
    ui->friendsFrame->hide();
    if (ui->postFrame->isHidden()) {
        ui->postFrame->show();
    } else {
        ui->postFrame->hide();
    }
}
void meshh::revealFriendsFrame() {
    this->refreshFriends();
    ui->postFrame->hide();
    if (!ui->friendsFrame->isHidden()) {
        ui->friendsFrame->hide();
        ui->addFriendFrame->hide();
    } else {
        ui->friendsFrame->show();
    }
}
void meshh::revealAddFriendFrame() {
    if (ui->addFriendFrame->isHidden()) {
        ui->addFriendFrame->show();
    } else {
        ui->addFriendFrame->hide();
    }
}

void meshh::alert(QString instr, QString color) {
    ui->alertText->setText(instr);
    connect(ui->declineButton, SIGNAL(clicked()), this, SLOT(closeAlert()));

    if (color == "red")
        ui->alertFrame->setStyleSheet("background: rgba(198,0,0,0.5)");
    if (color == "green")
        ui->alertFrame->setStyleSheet("background: rgba(0,198,0,0.5)");
    if (color == "gray")
        ui->alertFrame->setStyleSheet("background: rgba(0,0,0,0.5)");

    ui->alertFrame->show();
    ui->acceptButton->hide();

    QGraphicsOpacityEffect* opacityEffect = new QGraphicsOpacityEffect(this); // make sure to create using new, since effect has to be alive as long as the target widget is using it.
    opacityEffect->setOpacity(1); // initially widget should be visible
    ui->alertFrame->setGraphicsEffect(opacityEffect);
    QPropertyAnimation* anim = new QPropertyAnimation(this);
    anim->setTargetObject(opacityEffect);
    anim->setPropertyName("opacity");
    anim->setDuration(4500);
    anim->setStartValue(opacityEffect->opacity());
    anim->setEndValue(0);
    anim->setEasingCurve(QEasingCurve::InExpo);
    anim->start(QAbstractAnimation::DeleteWhenStopped);

    QSound *effect = new QSound("shhdir/sounds/alert.wav", this);
    effect->play();
}

void meshh::updateColor() {
    QString ss1("color: ");
    ss1.append(this->conf->themeColor);
    ss1.append("; ");
    QString ss2(ss1);
    ss2.append("background: #eee;");
    QString ss3;
    ss3.append("background: ");
    ss3.append(this->conf->themeColor);
    ss3.append("; color: #eee;");
    ui->headerBar->setStyleSheet(ss1);
    ui->streamButton->setStyleSheet(ss2);
    ui->onlineFriends->setStyleSheet(ss2);
    ui->newPosts->setStyleSheet(ss3);
    this->m.ui->pushButton->setStyleSheet(ss1);
    ui->displayname->setText(this->conf->displayName);
}

void meshh::sBarShow(QString msg) {
    if (debug==true)
        ui->statusBar->showMessage(msg);
}

void meshh::loadMsgHistory(QString namestr) {
    friendInfo tmp = findFriend(namestr);
    this->m.ui->messageHistory->clear();
    for (std::vector<QString>::iterator it = tmp.msgs->begin(); it != tmp.msgs->end(); ++it) {
        QString out;
        out.append(tmp.username);
        out.append(": ");
        out.append(*it);
        this->m.ui->messageHistory->append(out);
    }
}

void meshh::openSettings() {
    this->s.ui->displayNameBox->setText(this->conf->displayName);
    this->s.ui->displayImgBox->setText(this->conf->displayImg);
    this->s.ui->themeColorBox->setText(this->conf->themeColor);
    this->s.ui->privacyLevel->setValue(this->conf->privacyLevel);
    this->s.ui->listenPortBox->setText(QString::number(this->conf->listenPort));
    if (this->conf->indexName == "") { this->s.ui->addressBox->setEnabled(false); }
    else {
        this->s.ui->addressBox->setEnabled(true);
        this->s.ui->addressBox->setText(this->conf->indexName.section("@", 0, 0));
        this->s.ui->radioButton->setChecked(true);
    }
    QString ss;
    ss.append("color: ");
    ss.append(this->conf->themeColor);
    this->s.ui->colorBox->setStyleSheet(ss);
    this->s.show();
    this->s.move(QCursor::pos());
    connect(this->s.ui->saveButton, SIGNAL(clicked()), this, SLOT(saveSettings()));
}

void meshh::openProfile(QString uname) {
    if (uname != this->curfriend) {
        if (uname != this->conf->displayName) {
            this->curfriend = uname;
            friendInfo tmp = findFriend(uname);
            for (std::vector<profileInfo>::iterator it = this->profiles->begin(); it != this->profiles->end(); ++it) {
                profileInfo tmp2 = *it;
                if (tmp2.inf.username == tmp.username) {
                    this->loadProfile(tmp2);
                }
            }
        }
        if (uname == this->conf->displayName){
            this->loadProfile(*this->myInfo);
        }
    }
    this->p.show();
}

void meshh::addInfo(QString cat, QString inf) {
    QLabel *label = new QLabel();
    label->setText(cat + inf);
    this->p.ui->infoLayout->addWidget(label, 0, Qt::AlignTop);
}

void meshh::loadProfile(profileInfo inf) {
    QString namestr;
    if (inf.firstname != "") {
        namestr.append(inf.firstname);
        if (inf.lastname != "") {
            namestr.append(" ");
            namestr.append(inf.lastname);
        }
    } else {
        namestr.append(inf.inf.username);
    }
    this->p.ui->displayname->setText(namestr);
    if (inf.age != NULL) { addInfo("Age: ", QString::number(inf.age)); }
    if (inf.city != "") { addInfo("Location: ", QString(inf.city + ", " + inf.state)); }
    if (inf.occupation != "") { addInfo("Occupation: ", inf.occupation); }
    if (inf.education != "") { addInfo("Education: ", inf.education); }
    if (inf.email != "") { addInfo("E-Mail: ", inf.email); }
    if (inf.avatar != "" && this->p.ui->profileFrame->layout() == NULL){
        QVBoxLayout *layout = new QVBoxLayout;
        QGraphicsView* w = new QGraphicsView();
        QGraphicsScene* scene = new QGraphicsScene(w);
        QPixmap pix(inf.avatar);
        QPixmap pix2 = pix.scaled(120,120);
        scene->setSceneRect(0,0,140,140);
        w->setScene(scene);
        w->setFixedSize(140, 140);
        scene->addPixmap(pix2);
        layout->setContentsMargins(0,0,0,0);
        layout->addWidget(w, 0, Qt::AlignTop);

        this->p.ui->profileFrame->setLayout(layout);
        w->show();
    }
    if (inf.themecode != "") {
        QString ss;
        ss.append("color:");
        ss.append(inf.themecode);
        ss.append(";");
        this->p.ui->nameplate->setStyleSheet(ss);
    }
}

void meshh::loadMyProfile() {
    this->myInfo = new profileInfo();
    std::string line;
    std::string pth = "shhdir/profile.shh";
    std::ifstream myfile (pth.c_str());
    if (myfile.is_open()) {
        while ( std::getline (myfile,line) ) {
            QString varname = QString::fromStdString(line).section("=", 0, 0);
            QString val = QString::fromStdString(line).section("=", 1, 1);
            if (varname == "firstname")    { this->myInfo->firstname = val;              }
            if (varname == "lastname")     { this->myInfo->lastname  = val;              }
            if (varname == "age")          { this->myInfo->age       = val.toUInt();     }
            if (varname == "birthyear")    { this->myInfo->birthyear = val.toUInt();     }
            if (varname == "birthmonth")   { this->myInfo->birthmonth= val.toUInt();     }
            if (varname == "birthday")     { this->myInfo->birthday  = val.toUInt();     }
            if (varname == "country")      { this->myInfo->country   = val;              }
            if (varname == "state")        { this->myInfo->state     = val;              }
            if (varname == "city")         { this->myInfo->city      = val;              }
            if (varname == "occupation")   { this->myInfo->occupation= val;              }
            if (varname == "p_occupations"){ this->myInfo->p_occupations->push_back(val);}
            if (varname == "education")    { this->myInfo->education = val;              }
            if (varname == "email")        { this->myInfo->email     = val;              }
            if (varname == "imuser")       { this->myInfo->imusers->push_back(val);      }
            if (varname == "link")         { this->myInfo->links->push_back(val);        }
            if (varname == "avatar")       { this->myInfo->avatar    = val;              }
            if (varname == "themecode")    { this->myInfo->themecode = val;              }
        }
    }
}

void meshh::saveSettings() {
    umbraConfig *tmp = this->conf;
    if (this->s.ui->displayNameBox->text() != tmp->displayName) { tmp->displayName = this->s.ui->displayNameBox->text(); }
    if (this->s.ui->displayImgBox->text() != tmp->displayImg) { tmp->displayImg = this->s.ui->displayImgBox->text(); }
    if (this->s.ui->themeColorBox->text() != tmp->themeColor) { tmp->themeColor = this->s.ui->themeColorBox->text(); }
    if (this->s.ui->privacyLevel->value() != tmp->privacyLevel) { tmp->privacyLevel = this->s.ui->privacyLevel->value(); }
    if (this->s.ui->listenPortBox->text() != QString::number(tmp->listenPort)) { tmp->listenPort = this->s.ui->listenPortBox->text().toUInt(); }

    std::ofstream file;
    file.open("shhdir/conf.shh", std::ios_base::out);
    file << "displayname=" << this->conf->displayName.toStdString() << std::endl;
    file << "port=" << this->conf->listenPort << std::endl;
    file << "privacylevel=" << this->conf->privacyLevel << std::endl;
    file << "displayimg=" << this->conf->displayImg.toStdString() << std::endl;
    file << "themecolor=" << this->conf->themeColor.toStdString() << std::endl;
    file.close();

    this->conf = tmp;

    updateColor();
    this->s.close();
}

void meshh::sendProfile(QHostAddress host, qint16 port) {
    QString outstr;
    profileInfo *my = this->myInfo;
    outstr.append("0x07:");
    if (my->age != NULL) {
        outstr.append("AGE=");
        outstr.append(QString::number(my->age));
        outstr.append(";");
    }
    if (my->city != "") {
        outstr.append("CITY=");
        outstr.append(my->city);
        outstr.append(";");
    }
    if (my->state != "") {
        outstr.append("STATE=");
        outstr.append(my->state);
        outstr.append(";");
    }
    if (my->occupation != "") {
        outstr.append("OCC=");
        outstr.append(my->occupation);
        outstr.append(";");
    }
    if (my->email != "") {
        outstr.append("EMAIL=");
        outstr.append(my->email);
        outstr.append(";");
    }
    if (my->themecode != "") {
        outstr.append("TCODE=");
        outstr.append(my->themecode);
        outstr.append(";");
    }
    QByteArray datagram;
    datagram.append(outstr);
    udpSocket->writeDatagram(datagram.data(), datagram.size(), host, port);
}

profileInfo meshh::findInfo(friendInfo inf) {
    for (std::vector<profileInfo>::iterator it = this->profiles->begin(); it != this->profiles->end(); ++it) {
        profileInfo tmp = *it;
        if (tmp.inf.username == inf.username) {
            return *it;
        }
    }
    profileInfo *empty = new profileInfo();
    return *empty;
}

profileInfo meshh::findInfo(QString uname) {
    for (std::vector<profileInfo>::iterator it = this->profiles->begin(); it != this->profiles->end(); ++it) {
        profileInfo tmp = *it;
        if (tmp.inf.username == uname) {
            return *it;
        }
    }
    profileInfo *empty = new profileInfo();
    return *empty;
}

void meshh::openSearchBox() {
    if (ui->searchBox->isHidden()) {
        ui->searchBox->show();
        ui->searchEnterButton->show();
    } else {
        ui->searchBox->hide();
        ui->searchEnterButton->hide();
    }
}
