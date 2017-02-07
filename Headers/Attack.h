// Attack.h
// Richard Young 2/2017

class Attack:public Event{
    public:
        Attack(int time, int source, int target);
        ~Attack();

        int getSource();
        int getTarget();

    protected:
        int source;
        int target;
};