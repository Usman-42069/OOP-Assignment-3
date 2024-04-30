#pragma once
#include<iostream>
#include<string>
using namespace std;
#ifndef Battery_H
#define Battery_H

class Battery {
	int capacity;
public:
	Battery();
	Battery(int capacity);
	int getCapacity();
	void setCapacity(int capacity);
	void printSpecs();
};

#endif