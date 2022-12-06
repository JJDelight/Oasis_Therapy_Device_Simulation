#include "record.h"
#include <string>
#include <iostream>

using namespace std;

Record::Record(Session* sess, QString user){
//    intensityLevel = intensity;
//    duration = dur;
//    sessionType = type;
    sesh = sess;
    username = user;
}

Record::~Record(){}

//int Record::getDuration(){return duration;}
//int Record::getIntensity(){return intensityLevel;}
//QString Record::getSessionType(){return sessionType;}

Session* Record::getSession(){return sesh;}

QString Record::getUser(){return username;}

//void Record::setIntensity(int intensity){intensityLevel = intensity;}

//Formats the saved session information to be displayed in the saved replays
QString Record::format(){ 
    QString d = QString::number(sesh->getDuration());
    QString i = QString::number(sesh->getIntensity());
    QString s = sesh->getSessionType();
    QString rec = QString("Duration: %1; intensity: %2; Session Stype: %3; User: %4").arg(d).arg(i).arg(s).arg(username);
    return rec;
}
