// test file for priorityQueue.cpp
// Richard Young 2/2017
#include <iostream>
#include "PriorityQueue.cpp"

int main{
    PriorityQueue q(10, true);
    Event e1;
    e1.time = 1;
    e1.type = "attack";
     Event e2;
    e2.time = 2;
    e2.type = "attack";
     Event e3;
    e3.time = 3;
    e3.type = "attack";
     Event e4;
    e4.time = 4;
    e4.type = "attack";
     Event e5;
    e5.time = 5;
    e5.type = "attack";
     Event e6;
    e6.time = 6;
    e6.type = "attack";
    q.insert(e1);
    q.insert(e6);
    q.insert(e3);
    q.insert(e2);
    q.insert(e5);
    q.insert(e4);
    
}