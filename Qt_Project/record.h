#ifndef RECORD_H
#define RECORD_H

#include <QString>

class Record
{
public:
    Record(int dur, int intens, QString type, QString user);
    ~Record();
    int getDuration();
    int getIntensity();
    QString getSessionType();
    QString getUser();
    void setIntensity(int intensity);

private:
    int duration;
    int intensityLevel;
    QString sessionType;
    QString username;
};

#endif // RECORD_H
