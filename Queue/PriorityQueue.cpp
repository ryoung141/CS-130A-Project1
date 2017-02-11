// PriorityQueue.cpp
// Richard Young 2/2017
#include <string>
#include <iostream>
#include "../Events/Event.h"

/*struct Event {
    int time;
    string type;
}*/

class PriorityQueue{
    public:
        PriorityQueue(){
             size = 10;
             counter = 0;
             ptr = new Event[size];
        }
        PriorityQueue(int size){
            counter = 0;
            ptr = new Event[size];
        }
        PriorityQueue(int size, bool testing){
            counter = 0;
            ptr = new Event[size];
            debug = testing;
        }
        ~PriorityQueue(){
            counter = 0;
            delete [] ptr;
        }

        bool isEmpty(){ //returns true if empty
            if (counter = 0)
                return true;
            else
                return false;
        } 
        void insert(Event e){
            ptr[counter + 1] = e;
            percolateUp(e, counter + 1);
            counter++;
        }
        Event removeMax(){ //remove highest priority item
            if (ptr[1].getType() == "attack"){
                //get source and target, change target to compromised
            }
            else if (ptr[1].getType() == "notify"){
                //get source and target of the attack within notify, send notification to IDS
            }
            else if (ptr[1].getType() == "fix"){
                //fix source and target
            }
            ptr[1] = ptr[counter];
            counter--;
            percolateDown(ptr[1], 1);
        }
        void percolateUp(Event e, int currentPos){
            if (debug = false){
                if (e.getPosition() < ptr[currentPos/2].getPosition()){
                    Event * tmp = &ptr[currentPos/2];
                    ptr[currentPos/2] = e;
                    ptr[currentPos] = *tmp;
                    delete tmp;
                    percolateUp(e, currentPos/2);
                }
                else{  
                    return;
                }
            }
           /* if (debug = true){
                if (e.time < ptr[currentPos/2].time){
                    Event * tmp = ptr[currentPos/2]
                    ptr[currentPos/2] = e;
                    ptr[currentPos] = *tmp;
                    delete tmp;
                    percolateUp(e, currentPos/2);
                }
                else{  
                    return;
                }
            }*/
        }
        
        void percolateDown(Event e, int currentPos){
            if (e.getPosition() > ptr[currentPos * 2].getPosition()){
                Event * tmp = &ptr[currentPos * 2];
                ptr[currentPos * 2] = e;
                ptr [currentPos] = *tmp;
                delete tmp;
                percolateDown(e, currentPos * 2);
            }
            else if(e.getPosition() > ptr[currentPos * 2 + 1].getPosition()){
                Event * tmp = &ptr[currentPos * 2 + 1];
                ptr[currentPos * 2 + 1] = e;
                ptr [currentPos] = *tmp;
                delete tmp;
                percolateDown(e, currentPos * 2 + 1);
            }
            else{
                return;
            }
        }
            
    protected:
        int size;
        Event * ptr;
        int counter;
        bool debug;
        //ptr = new Event [size];
};