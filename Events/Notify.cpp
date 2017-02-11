// Notify.cpp
// Richard Young 2/2017

#ifndef NOTIFY_CPP
#define NOTIFY_CPP

#include <iostream>
#include <string>
#include "Notify.h"
#include "Attack.cpp"
//#include "Sysadmin.h"

Notify::Notify(int time, Attack atk){
		t = time;
		a = atk;
}	

Notify::~Notify(){}

//bool Notify::n_probe(Sysadmin s){} Todo: Implement Sysadmin

int Event::getPosition(){
	return t;
}

string Event::getType(){
	return type;
}

void Event::setPosition(int time){
	t = time;
}

#endif