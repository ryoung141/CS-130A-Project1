// Attacker.h
// Richard Young 2/2017

#include "../Events/Event.h"
#include "../Events/Attack.h"

class Attacker{
    public:
        Attacker(int c);     //Constructor
        ~Attacker();                       //Destructor

        Attack Q_Attack(int time, int source, int target);
        int getName();          //returns position
        bool getStatus();       //returns isAttacker
		int getChance();
    
    protected:
        //int name;
        bool isAttacker;
		int chance;

};