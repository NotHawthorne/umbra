#ifndef CONSTRUCTORS_H
#define CONSTRUCTORS_H

newsPost::newsPost(QString uname, QString pdate, QString content) {
    username = uname;
    date = pdate;
    txt = content;
}
newsPost::newsPost(QString uname, QString pdate, QString content, QString fname) {
    username = uname;
    date = pdate;
    txt = content;
    filename = fname;
}

friendInfo::friendInfo(QString uname, QString ipaddr, QString port, bool status){
    username = uname;
    QHostAddress ad;
    ad.setAddress(ipaddr);
    IP = ad;
    portnum = port.toUInt();
    online = status;
    msgs = new std::vector<QString>;
}

friendInfo::friendInfo(QString uname, QString ipaddr, QString port, QString key, bool status){
    username = uname;
    QHostAddress ad;
    ad.setAddress(ipaddr);
    IP = ad;
    portnum = port.toUInt();
    online = status;
    publickey = key;
    msgs = new std::vector<QString>;
}

friendInfo::friendInfo(){
    username = "";
    IP = NULL;
    portnum = NULL;
    online = NULL;
}

umbraConfig::umbraConfig() {
    displayName = "";
    displayImg  = "";
    listenPort  = NULL;
    privacyLevel= NULL;
    themeColor  = "";
    debug = false;
}

umbraConfig::umbraConfig(QString uname, QString path, QString prt, QString privlvl, QString color) {
    displayName = uname;
    displayImg  = path;
    listenPort  = prt.toUInt();
    privacyLevel= privlvl.toUInt();
    themeColor  = color;
    debug = false;
}

#endif // CONSTRUCTORS_H