// Notify.h
// Richard Young 2/2017

class Notify:public Event{
    public:
        Notify(int time, Attack a);
        ~Notify();

    protected:
        Attack a;
};