// Notify.h
// Richard Young 2/2017

#ifndef NOTIFY_H
#define NOTIFY_H

class Notify:public Event{
    public:
        Notify(int time, Attack a);
        ~Notify();

        bool n_probe(Sysadmin s);

    protected:
        Attack a;
};

#endif


