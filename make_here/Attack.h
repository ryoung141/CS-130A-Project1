// Attack.h
// Richard Young 2/2017

#ifndef ATTACK_H
#define ATTACK_H

#include "Event.h"
//#include "Event.cpp"

class Attack:public Event{
    public:
		Attack();
        Attack(int time, int source, int target);
        ~Attack();

        bool a_probe(int target);   //attacks target
        int getSource();            //used when determining source for notify and fix
        int getTarget();            //used when determining target for notify and fix
		
	int getPosition();
	string getType();
	void setPosition(int time);

    protected:
        int s;
        int tg;
		//bool isFromAttacker;
};

#endif