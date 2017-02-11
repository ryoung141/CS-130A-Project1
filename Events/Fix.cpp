// Fix.cpp
// Richard Young 2/2017

#include <iostream>
#include <string>
#include "Fix.h"

using namespace std;

Fix::Fix(int time, int target){
	string type = "fix";
	t = time;
	tgt = target;
}

Fix::~Fix(){}

bool Fix::f_probe(int target){
	//todo: finish once network is implemented
	return true;
}