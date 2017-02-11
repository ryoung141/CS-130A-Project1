// Attack.cpp
// Richard Young 2/2017

#ifndef ATTACK_CPP
#define ATTACK_CPP

#include <iostream>
#include "Attack.h"
#include "../Queue/PriorityQueue.cpp"

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

int Attack::getPosition(){
	return t;
}

string Attack::getType(){
	return type;
}

void Attack::setPosition(int time){
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

#endif