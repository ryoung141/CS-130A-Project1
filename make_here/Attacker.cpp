// Attacker.cpp
// Richard Young 2/2017

#ifndef ATTACKER_CPP
#define ATTACKER_CPP

#include <cstdlib>
#include "Attacker.h"
#include "../Events/Attack.h"//cpp
//#include "../Queue/PriorityQueue.cpp"

Attacker::Attacker(int c){
	chance = c;
	isAttacker = true;
}

Attacker::~Attacker(){}

int Attacker::getChance(){
	return chance;
}

Attack Attacker::Q_Attack(int time, int source, int target){
	Attack rtrn = Attack(time, source, target);
	return rtrn;
}

bool Attacker::getStatus(){
	return isAttacker;
}

#endif