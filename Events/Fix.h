// Fix.h
// Richard Young 2/2017

#ifndef FIX_H
#define FIX_H

#include "Event.h"

class Fix:public Event{
    public:
        Fix(int time, int target);
        ~Fix();

        bool f_probe(int target);

    protected:
        int tgt;
};

#endif