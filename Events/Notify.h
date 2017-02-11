// Notify.h
// Richard Young 2/2017

#ifndef NOTIFY_H
#define NOTIFY_H

#include "Event.h"
#include "Attack.h"
#include "Attack.cpp"

class Notify:public Event{
    public:
        Notify(int time, Attack atk);
        ~Notify();

        //bool n_probe(Sysadmin s);

    protected:
        Attack a;
};

#endif


