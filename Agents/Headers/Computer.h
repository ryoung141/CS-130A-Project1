// Computer.h
// Richard Young 2/2017

class Computer{
    public:
        Computer(int name);     //Constructor
        ~Computer();    //Destructor

        void Q_Attack(int time, int source, int target);    //queues an attack
        void recieveAttack(Attack a);                       //recieves attack from elsewhere
        
        bool getStatus();                                   
        void setStatus(bool isCompromised);
        int getName();

    protected:
        bool isCompromised;
        int name;
        int chanceOfSuccess         //determined by Percent_success in environment
        Attack a;
};