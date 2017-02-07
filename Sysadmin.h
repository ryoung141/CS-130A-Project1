// Sysadmin.h
// Richard Young 2/2017

class Sysadmin{
    public:
        Sysadmin();     //Constructor
        ~Sysadmin();    //Destructor

        void Q_Fix(int time, int source, int target);   //if source == -1, then the source is the attacker
        
};