// Events.h
// Richard Young 2/2017

// Base class for all events

#ifndef EVENT_H
#define EVENT_H

#include <string>
#include <cstdlib>

using namespace std;

class Event{
    public:
        virtual int getPosition();
        virtual string getType();
        virtual void setPosition(int position);

    protected:
        int t;
        string type;
};

#endif
