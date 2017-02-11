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
			if (counter < size){
				ptr[counter + 1] = e;
				percolateUp(e, counter + 1);
				counter++;
				//debugging
				cout << "Inserted one!" << endl;
				cout << ptr[counter + 1].getPosition() << " " << ptr[counter + 1].getType() << endl;
			}
			else{
				int size_new = size * 2;
				Event * tmp = ptr;
				ptr = new Event[size_new];
				for (int i=1; i<size; i++){
					ptr[i] = tmp[i];
				}
				ptr[counter + 1] = e;
				percolateUp(e, counter + 1);
				counter++;
			}
        }
        void removeMax(){ //remove highest priority item
            if (ptr[1].getType() == "attack"){
                //get source and target, change target to compromised
				
            }
            else if (ptr[1].getType() == "notify"){
                //get source and target of the attack within notify, send notification to IDS
				//call underAttack
            }
            else if (ptr[1].getType() == "fix"){
                //fix source and target
            }
            ptr[1] = ptr[counter];
            counter--;
            percolateDown(ptr[1], 1);
			return;
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
		
		void print(){
			for (int i = 1; i<counter; i++){
				cout << ptr[i].getPosition() << "     " << ptr[i].getType() << endl;
			}
			return;
		}
            
    protected:
        int size;
        Event * ptr;
        int counter;
        bool debug;
        //ptr = new Event [size];
};