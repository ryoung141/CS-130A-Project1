// IDS.h
// Richard Young 2/2017

class IDS{
    public:
        IDS(int chanceOfDetection);   //Constructor sets chanceOfDetection by Percent_detect
        ~IDS();  //Destructor

        void Q_Notify(int time, Attack a);      //Queues a Notify event
        bool underAttack(Attack a);             //Determines whether or not to call Q_Notify based on chanceOfDetection
        void recieveAttack(Attack a);           //Recieves attack from somewhere

    protected:
        int chanceOfDetection;                  //set by Percent_detect when environment is initialized
        Attack a;

};