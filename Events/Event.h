// Events.h
// Richard Young 2/2017

// Base class for all events
#include <string>
#include <cstdlib>

using namespace std;

class Event{
    public:
        virtual int getPosition() = 0;
        virtual string getType() = 0;
        virtual void setPosition(int position) = 0;

    protected:
        int t;
        string type;
};
