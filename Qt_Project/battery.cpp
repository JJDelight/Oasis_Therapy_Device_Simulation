#include "battery.h"

Battery::Battery(){
    int level = 1000;
};

void Battery::setLevel(int power){
    level = power;
}

int Battery::getLevel(){
    return power;
}
