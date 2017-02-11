// Notify.cpp
// Richard Young 2/2017

#include <iostream>
#include <string>
#include "Notify.h"
#include "Attack.h"
//#include "Sysadmin.h"

Notify::Notify(int time, Attack atk){
		t = time;
		a = atk;
}	

Notify::~Notify(){}

//bool Notify::n_probe(Sysadmin s){} Todo: Implement Sysadmin