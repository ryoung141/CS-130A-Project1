// Event.cpp
// Richard Young 2/2017

#include <iostream>
#include "Event.h"

Event::Event(int time){
    t = time;
}

Event::~Event(){}

int Event::getPosition(){
    return t;
}

void Event::setPosition(int position){
    t = position;
}