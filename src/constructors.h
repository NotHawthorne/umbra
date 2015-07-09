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
newsPost::newsPost(QString uname, QString pdate, QString content, QDateTime d_time) {
    username = uname;
    date = pdate;
    txt = content;
    dt = d_time;
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
    indexName = "";
    dukeip = "";
    build = "";
}

umbraConfig::umbraConfig(QString uname, QString path, QString prt, QString privlvl, QString color) {
    displayName = uname;
    displayImg  = path;
    listenPort  = prt.toUInt();
    privacyLevel= privlvl.toUInt();
    themeColor  = color;
    debug = false;
    indexName = "";
    dukeip = "";
    build = "";
}

profileInfo::profileInfo() {
    firstname = "";
    lastname = "";
    age = NULL;
    birthyear = NULL;
    birthmonth = NULL;
    birthday = NULL;
    country = "";
    state = "";
    city = "";
    occupation = "";
    p_occupations = new std::vector<QString>;
    education = "";
    email = "";
    imusers = new std::vector<QString>;
    links = new std::vector<QString>;
    avatar = "";
    themecode = "";
}


#endif // CONSTRUCTORS_H
