// Attack.cpp
// Richard Young 2/2017

#include <iostream>
#include "Attack.h"

Attack::Attack(){
	t = 0;
	s = 999999;
	tg = 999998;
	type = "attack";
}

Attack::Attack(int time, int source, int target){
    t = time;
    s = source;
    tg = target;
    type = "attack";
}

int Event::getPosition(){
	return t;
}

string Event::getType(){
	return type;
}

void Event::setPosition(int time){
	t = time;
}

int Attack::getSource(){
    return s;
}

int Attack::getTarget(){
    return tg;
}

bool Attack::a_probe(int target){
		return true;
}