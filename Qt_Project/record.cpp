#include "record.h"

Record::Record(int dur, int intensity, QString type, QString user){
    intensityLevel = intensity;
    duration = dur;
    sessionType = type;
    username = user;
}

Record::~Record(){}

int Record::getDuration(){return duration;}
int Record::getIntensity(){return intensityLevel;}
QString Record::getSessionType(){return sessionType;}
QString Record::getUser(){return username;}
void Record::setIntensity(int intensity){intensityLevel = intensity;}
