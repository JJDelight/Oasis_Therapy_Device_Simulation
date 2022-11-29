#ifndef SESSION_H
#define SESSION_H



#include <QString>

class Session
{
public:
    Session(int dur, int intens, QString type);
    ~Session();
    int getDuration();
    int getIntensity();
    QString getSessionType();

private:
    int duration;
    int intensityLevel;
    QString sessionType;
};
#endif // SESSION_H
