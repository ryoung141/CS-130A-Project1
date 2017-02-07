// Fix.h
// Richard Young 2/2017

class Fix:public Event{
    public:
        Fix(int time, int target);
        ~Fix();

    protected:
        int target;
};