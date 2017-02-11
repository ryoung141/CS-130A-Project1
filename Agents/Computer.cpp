// Computer.cpp
// Richard Young 2/2017

#ifndef COMPUTER_CPP
#define COMPUTER_CPP

#include "Computer.h"
#include "../Events/Attack.cpp"
//#include "../Queue/PriorityQueue.cpp"


Computer::Computer(int n){
	name = n;
	isCompromised = false;
}

Computer::~Computer(){}

Attack* Computer::Q_Attack(int time, int source, int target){
	Attack * rtrn = new Attack(time, source, target);
	return rtrn;
}

bool Computer::getStatus(){
	return isCompromised;
}

void Computer::setStatus(bool status){
	isCompromised = status;
}

int Computer::getName(){
	return name;
}

#endif