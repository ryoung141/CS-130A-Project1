// Fix.cpp
// Richard Young 2/2017

#ifndef FIX_CPP
#define FIX_CPP

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

int Fix::getPosition(){
	return t;
}

string Fix::getType(){
	return type;
}

void Fix::setPosition(int time){
	t = time;
}

#endif