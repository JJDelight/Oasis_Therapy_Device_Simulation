#ifndef RECORD_H
#define RECORD_H

#include <QString>
#include "session.h"

class Record
{
public:
    Record(Session* sess, QString user);
    ~Record();
//    int getDuration();
//    int getIntensity();
//    QString getSessionType();
    Session* getSession();
    QString format();
    QString getUser();
    void setIntensity(int intensity);

private:
//    int duration;
//    int intensityLevel;
//    QString sessionType;
    Session* sesh;
    QString username;
};

#endif // RECORD_H
