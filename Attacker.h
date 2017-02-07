// Attacker.h
// Richard Young 2/2017


class Attacker{
    public:
        Attacker(int chanceOfSuccess);     //Constructor
        ~Attacker();                       //Destructor

        void Q_Attack(int time, int source, int target);
        int getName();
    
    protected:
        int chanceOfSuccess;               //determined by Percent_success in environment
        int name = -1;

};