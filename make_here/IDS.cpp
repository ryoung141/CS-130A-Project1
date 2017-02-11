// IDS.cpp
// Richard Young 2/2017

#ifndef IDS_CPP
#define IDS_CPP

#include <cstdlib>
#include "IDS.h"
#include "../Events/Event.h"
#include "../Events/Notify.h"
#include "../Events/Attack.h"



IDS::IDS(int chanceOfDetection){
	chance = chanceOfDetection;
}

IDS::~IDS(){}

Notify* IDS::Q_Notify(int time, Attack a){
	Notify * rtrn = new Notify(time, a);
	return rtrn;
}

bool IDS::underAttack(Attack a){
	if ((rand() % 100 + 1) >= chance){
		int note_time = a.getPosition() + 100;
		Q_Notify(note_time, a);
		return true;
	}
	else{return false;}
}

#endif