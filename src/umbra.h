#ifndef MESHH_H
#define MESHH_H
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

class QUdpSocket;

namespace Ui { class newsPost; class meshh; }

class newsPost {
public:
    QString username, date, txt, filename;
public:
    newsPost (QString, QString, QString);
    newsPost (QString, QString, QString, QString);
};

class friendInfo {
public:
    QString username, publickey;
    QHostAddress IP;
    qint16 portnum;
    bool online;
    std::vector<QString> *msgs;

public:
    friendInfo ();
    friendInfo (QString, QString, QString, bool);
    friendInfo (QString, QString, QString, QString, bool);
};

class umbraConfig {
public:
    QString displayName, displayImg, themeColor;
    qint16 listenPort;
    int privacyLevel;
    bool debug;

public:
    umbraConfig();
    umbraConfig(QString, QString, QString, QString, QString);
};

class meshh : public QMainWindow
{
    Q_OBJECT

public:
    explicit meshh(QWidget *parent = 0);
    ~meshh();
    umbraConfig ReadConfig();
    void recvPost(QString str);
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
    void openProfile();

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
    Ui::meshh   *ui;
    messenger    m;
    settings     s;
    profile      p;
    QUdpSocket  *udpSocket;
    QPoint       dragPosition;
    friendInfo   p_friend;
    umbraConfig *conf;
    int          onlineFriends;
    bool         debug;

    std::vector<newsPost>     *posts;
    std::vector<friendInfo>   *friends;
    std::vector<QString>      *privatekeys;
    std::vector<QString>      *msgsPending;
    std::vector<QHostAddress> *conversessions;
};

#endif // MESHH_H
