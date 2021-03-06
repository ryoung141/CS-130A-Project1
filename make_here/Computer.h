// Computer.h
// Richard Young 2/2017

#ifndef COMPUTER_H
#define COMPUTER_H

#include "../Events/Event.h"
#include "../Events/Attack.h"

class Computer{
    public:
		Computer();
        Computer(int n);     //Constructor
        ~Computer();    //Destructor

        Attack* Q_Attack(int time, int source, int target);    //queues an attack
        //void recieveAttack(Attack a);                       //recieves attack from elsewhere
        
        bool getStatus();                                   
        void setStatus(bool status);
        int getName();

    protected:
        bool isCompromised;
        int name;
        int chanceOfSuccess;         //determined by Percent_success in environment
        //Attack a;
};

#endif