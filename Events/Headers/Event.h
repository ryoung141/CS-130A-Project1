// Events.h
// Richard Young 2/2017

// Base class for all events
class Event{
    public:
        Event(int time);
        ~Event();

        int getPosition();
        string getType();
        void setPosition(int position);

    protected:
        int time;
        string type;
};