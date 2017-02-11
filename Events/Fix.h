// Fix.h
// Richard Young 2/2017

#include "Event.h"

class Fix:public Event{
    public:
        Fix(int time, int target);
        ~Fix();

        bool f_probe(int target);

    protected:
        int tgt;
};