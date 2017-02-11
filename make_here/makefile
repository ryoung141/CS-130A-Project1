CC=g++
AGENTS_O = Attacker.o IDS.o Sysadmin.o Computer.o
EVENTS_O = Fix.o Attack.o Notify.o
QUEUE_O = PriorityQueue.o
NETWORK_O = Network.o
AGENTS_S = Attacker.cpp IDS.cpp Sysadmin.cpp Computer.cpp
EVENTS_S = Fix.cpp Attack.cpp Notify.cpp
QUEUE_S = PriorityQueue.cpp
NETWORK_S = Network.cpp
EXECUTABLE = cs130a_hw1
CFLAGS = -c

all: copy $(AGENTS_S) $(EVENTS_S) $(QUEUE_S) $(NETWORK_S) $(EXECUTABLE) 

$(EXECUTABLE): Agents Events Queue Network
	$(CC) $(AGENTS_O) $(EVENTS_O) $(QUEUE_O) $(NETWORK_O) -o $@
	
Agents: copy
	$(CC) $(CFLAGS) $(AGENTS_S)
	
Events: copy
	$(CC) $(CFLAGS) $(EVENTS_S)
	
Queue: copy
	$(CC) $(CFLAGS) $(QUEUE_S)
	
Network: copy
	$(CC) $(CFLAGS) $(NETWORK_S)

copy:
	cp ../Agents/*.* .
	cp ../Events/*.* .
	cp ../Network/*.* .
	cp ../Queue/*.* .

clean:
	rm *.*