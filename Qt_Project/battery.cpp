#include "battery.h"

Battery::Battery(){
    level = 1000;
};

void Battery::setLevel(int power){
    if(power < 0){
        level = 0;
    }else{
        level = power;
    }
}

int Battery::getLevel(){
    return level;
}

//Restores the battery to full power
void Battery::fullPower(){
    level = 1000;
}
