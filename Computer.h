// Computer.h
// Richard Young 2/2017

class Computer{
    public:
        Computer(int name, int chanceOfSuccess);     //Constructor
        ~Computer();    //Destructor

        void Q_Attack(int time, int source, int target);
        
        bool getStatus();
        void setStatus();
        int getName();

    protected:
        bool isCompromised;
        int name;
        int chanceOfSuccess         //determined by Percent_success in environment
};