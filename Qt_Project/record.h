#ifndef RECORD_H
#define RECORD_H

#include <QString>
#include "session.h"

class Record
{
public:
    Record(Session* sess, QString user);
    ~Record();
    Session* getSession();
    QString format();
    QString getUser();
    void setIntensity(int intensity);

private:
    Session* sesh;
    QString username;
};

#endif // RECORD_H
