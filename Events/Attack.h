// Attack.h
// Richard Young 2/2017
#include "Event.h"
//#include "Event.cpp"

class Attack:public Event{
    public:
        Attack(int time, int source, int target);
        ~Attack();

        bool a_probe(int target);   //attacks target
        int getSource();            //used when determining source for notify and fix
        int getTarget();            //used when determining target for notify and fix

    protected:
        int s;
        int tg;
};