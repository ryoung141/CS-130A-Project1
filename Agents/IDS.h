// IDS.h
// Richard Young 2/2017

#ifndef IDS_H
#define IDS_H

#include "../Events/Event.h"
#include "../Events/Notify.h"
#include "../Events/Attack.h"

class IDS{
    public:
        IDS(int chanceOfDetection);   //Constructor sets chanceOfDetection by Percent_detect
        ~IDS();  //Destructor

        Notify* Q_Notify(int time, Attack a);      //Queues a Notify event
        bool underAttack(Attack a);             //Determines whether or not to call Q_Notify based on chanceOfDetection
        //void recieveAttack(Attack a);           //Recieves attack from somewhere

    protected:
        int chance;                  //set by Percent_detect when environment is initialized
        Attack a;

};

#endif