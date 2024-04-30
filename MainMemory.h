#pragma once
#include<iostream>
#include<string>
using namespace std;
#ifndef MainMemory_H
#define MainMemory_H
class MainMemory {
	int capacity;
	string technologyType;
public:
	int getCapacity() const;
	void setCapacity(int capacity);
	string getTechnologyType() const;
	void setTechnologyType(string type);
	void printSpecs();
	MainMemory(int capacity = 1000, string type = "Semiconductor") : capacity(capacity), technologyType(type)
	{

	}
};
#endif
