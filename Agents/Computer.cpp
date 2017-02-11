// Computer.cpp
// Richard Young 2/2017

#include "Computer.h"
#include "../Events/Attack.cpp"
#include "../Queue/PriorityQueue.cpp"


Computer::Computer(int n){
	name = n;
	isCompromised = false;
}

Computer::~Computer(){}

Event Computer::Q_Attack(int time, int source, int target){
	Attack out_going(int time, int source, int target);
	return out_going
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