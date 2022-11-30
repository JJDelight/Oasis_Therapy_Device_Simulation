#ifndef BATTERY_H
#define BATTERY_H


class Battery
{
public:
    Battery();
    void setLevel(int power);
    int getLevel();
    void fullPower();

private:
    int level;
};

#endif // BATTERY_H
