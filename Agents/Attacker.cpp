// Attacker.cpp
// Richard Young 2/2017

#ifndef ATTACKER_CPP
#define ATTACKER_CPP

#include "Attacker.h"
#include "../Events/Attack.cpp"
//#include "../Queue/PriorityQueue.cpp"

Attacker::Attacker(){
	isAttacker = true;
}

Attacker::~Attacker(){}

Attack* Attacker::Q_Attack(int time, int source, int target){
	Attack * rtrn = new Attack(time, source, target);
	return rtrn;
}

bool Attacker::getStatus(){
	return isAttacker;
}

#endif