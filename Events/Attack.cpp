// Attack.cpp
// Richard Young 2/2017

#include <iostream>
#include "Attack.h"

Attack::Attack(int time, int source, int target){
    t = time;
    s = source;
    tg = target;
    type = "attack";
}

int Attack::getSource(){
    return s;
}

int Attack::getTarget(){
    return tg;
}

bool Attack::a_probe(int target){
        
}