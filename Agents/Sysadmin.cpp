// Sysadmin.cpp
// Richard Young 2/2017

#ifndef SYSADMIN_CPP
#define SYSADMIN_CPP

#include "Sysadmin.h"
#include "../Events/Fix.cpp"
#include "../Events/Attack.cpp"
#include "../Events/Notify.cpp"

Sysadmin::Sysadmin(){
	hasBeenNotified = false;
}

Sysadmin::~Sysadmin(){}

Fix* Sysadmin::Q_Fix_Target(Attack a){
	if (hasBeenNotified = true){
		Fix * rtrn = new Fix(a.getPosition()+100, a.getTarget());
		return rtrn;
	}
	else{
		Fix * rtrn = NULL;
		return rtrn;
	}
}

Fix* Sysadmin::Q_Fix_Source(Attack a){
	if (hasBeenNotified = true){
		Fix * rtrn  = new Fix(a.getPosition()+100, a.getSource());
		return rtrn;
	}
	else{
		Fix * rtrn = NULL;
		return rtrn;
	}
}

//void Sysadmin::recieveNotify

#endif

