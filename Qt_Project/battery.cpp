#include "battery.h"

Battery::Battery(){
    level = 1000;
};

void Battery::setLevel(int power){
    level = power;
}

int Battery::getLevel(){
    return level;
}
