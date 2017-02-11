// Network.cpp
// Richard Young 2/2017

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../Events/Event.h"
#include "../Events/Notify.h"
#include "../Events/Attack.h"
#include "../Events/Fix.h"
#include "../Agents/IDS.h"
#include "../Agents/Computer.h"
#include "../Agents/Attacker.h"
#include "../Agents/Sysadmin.h"
#include "../Queue/PriorityQueue.cpp"

using namespace std;

int main(int argc, char* argv[]){
	//ensure right amount of args
	if(argc > 4){
		cout << "Error: too many arguements." << endl << "Correct format is: ./run number_of_computers percent_detect percent_detect" << endl;
		return 0;
	}
	
	//determine and declare pertinent variables
	int num_of_cpus = atoi(argv[0]);
	int successChance = atoi(argv[1]);
	int detectChance = atoi(argv[2]);
	int network1 = num_of_cpus/2;
	int network2 = num_of_cpus - network1;
	
	//init agents
	Sysadmin admin_outsider();
	Attacker attack_outsider(successChance);
	IDS ids_head(detectChance);
	
	//init network
	Computer * c = new Computer[num_of_cpus];
	for (int i=0; i<num_of_cpus; i++){
		Computer temp = Computer(i);
		c[i] = temp;
	}
	
	//init Queue
	PriorityQueue que = PriorityQueue(100);
	
	Attack a_ptr = attack_outsider.Q_Attack(1, 1, 1);
	que.insert(a_ptr);
	
	que.print();
	
	
	return 0;
}