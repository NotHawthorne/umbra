#ifndef umbra_H
#define umbra_H
#include <QMainWindow>
#include <QWidget>
#include <QtWidgets>
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <stdlib.h>
#include <QtNetwork>
#include <algorithm>
#include <ctime>
#include "messenger.h"
#include "settings.h"
#include "profile.h"
#include "loginPrompt.h"
#include "dukeSettings.h"

class QUdpSocket;

namespace Ui { class newsPost; class umbra; }

class newsPost {
public:
    QString username, date, txt, filename;
    QDateTime dt;
public:
    newsPost (QString, QString, QString);
    newsPost (QString, QString, QString, QString);
    newsPost (QString, QString, QString, QDateTime);
};

typedef std::map<int, newsPost> orderedNewsMap;

class friendInfo {
public:
    QString username, publickey;
    QHostAddress IP;
    quint16 portnum;
    bool online;
    std::vector<QString> *msgs;

public:
    friendInfo ();
    friendInfo (QString, QString, QString, bool);
    friendInfo (QString, QString, QString, QString, bool);
};

class profileInfo {
public:
    QString firstname, lastname, country, state, city, occupation, email, education, avatar, themecode;
    std::vector<QString> *p_occupations,*imusers, *links;
    int age, birthyear, birthmonth, birthday;
    friendInfo inf;

public:
    profileInfo ();
    profileInfo (friendInfo);
    profileInfo (QString);
    profileInfo (QHostAddress);
};

class umbraConfig {
public:
    QString displayName, displayImg, themeColor, indexName, dukeip, build;
    quint16 listenPort;
    int privacyLevel;
    bool debug;

public:
    umbraConfig();
    umbraConfig(QString, QString, QString, QString, QString);
};

class umbra : public QMainWindow
{
    Q_OBJECT

public:
    explicit umbra(QWidget *parent = 0);
    ~umbra();
    umbraConfig ReadConfig();
    void recvPost(newsPost postdata);
    void hiFriends();

private slots:
    void processPendingDatagrams();
    void end();
    void populateLocalPosts();
    void sendPostData(QHostAddress addr, short unsigned int prt);
    void requestStream();
    void revealPostFrame();
    void addPost();
    void revealFriendsFrame();
    void refreshFriends();
    void revealAddFriendFrame();
    void reqFriend();
    void acceptFriend();
    void declineFriend();
    void saveFriend(friendInfo inf);
    void closeAlert();
    bool findFriend(friendInfo inf);
    void alert(QString text, QString color);
    void updateColor();
    void sBarShow(QString text);
    void newMessageSession(QString str);
    void sendMsg();
    friendInfo findFriend(QString namestr);
    friendInfo findFriend(QHostAddress inf);
    void loadMsgHistory(QString namestr);
    void processPendingMessages();
    void openSettings();
    void saveSettings();
    void openProfile(QString uname);
    void sendPicture(QString path, friendInfo);
    void processTcpData();
    void newTcpConnection();
    void loadProfile(profileInfo inf);
    void loadMyProfile();
    void addInfo(QString cat, QString inf);
    void requestProfile(QString uname);
    void sendProfile(QHostAddress host, qint16 port);
    profileInfo findInfo(friendInfo inf);
    profileInfo findInfo(QString uname);
    void askDuke(QString uname);
    void askDuke();
    void openSearchBox();
    void promptLogin();
    void dukeLogin();
    void dukeRegister();
    void dukeSave();
    void manage_network_reply(QNetworkReply* net_reply);

protected:
    void mouseMoveEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
    void mousePressEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
    void showEvent(QShowEvent* event)
    {
        /*QMainWindow::showEvent(event);
        QPixmap pixmap(size());
        pixmap.fill(Qt::transparent);
        QPainter::setRedirected(this, &pixmap);
        QPaintEvent pe(rect());
        paintEvent(&pe);
        QPainter::restoreRedirected(this);
        setMask(pixmap.mask());*/
    }

private:
    Ui::umbra   *ui;
    messenger    m;
    settings     s;
    profile      p;
    loginPrompt  lp;
    dukeSettings ds;
    QByteArray  *tcpData;
    QUdpSocket  *udpSocket;
    QTcpSocket  *tcpSocket;
    QTcpServer  *tcpServer;
    QPoint       dragPosition;
    friendInfo   p_friend;
    umbraConfig *conf;
    int          onlineFriends;
    bool         debug;
    QString      pndfrnd;
    profileInfo *myInfo;
    QString      curfriend;
    QCryptographicHash* hash;
    QString      dukekey;

    std::vector<newsPost>     *posts;
    std::vector<friendInfo>   *friends;
    std::vector<profileInfo>  *profiles;
    std::vector<QString>      *privatekeys;
    std::vector<QString>      *msgsPending;
    std::vector<QHostAddress> *conversessions;
};

#endif // umbra_H
