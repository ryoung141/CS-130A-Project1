// Sysadmin.h
// Richard Young 2/2017


#ifndef SYSADMIN_H
#define SYSADMIN_H

#include "../Events/Notify.h"
#include "../Events/Fix.h"
#include "../Events/Event.h"
#include "../Events/Attack.h"


class Sysadmin{
    public:
        Sysadmin();     //Constructor
        ~Sysadmin();    //Destructor

        Fix* Q_Fix_Target(Attack a);   //if source == -1, then the source is the attacker
		Fix* Q_Fix_Source(Attack a);
        //void recieveNotify(Notify n);                   //recieves notification from IDS

    protected:
		bool hasBeenNotified;
        //Notify n;
};

#endif