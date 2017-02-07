// Attacker.h
// Richard Young 2/2017


class Attacker{
    public:
        Attacker(int name);     //Constructor
        ~Attacker();                       //Destructor

        void Q_Attack(int time, int source, int target);
        int getName();          //returns position
        bool getStatus();       //returns isAttacker
    
    protected:
        int name;
        bool isAttacker;

};