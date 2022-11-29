#include "session.h"

Session::Session(int dur, int intensity, QString type){
    intensityLevel = intensity;
    duration = dur;
    sessionType = type;
}

Session::~Session(){}

int Session::getDuration(){return duration;}
int Session::getIntensity(){return intensityLevel;}
QString Session::getSessionType(){return sessionType;}
