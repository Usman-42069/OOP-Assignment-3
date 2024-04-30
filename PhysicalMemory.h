#pragma once
#include<iostream>
#include<string>
using namespace std;
#ifndef PhysicalMemory_H
#define PhysicalMemory_H

class PhysicalMemory {
	int capacity;
public:

	int getCapacity() const;
	void setCapacity(int capacity);
	void printSpecs();
	PhysicalMemory(int capacity = 500) : capacity(capacity)
	{

	}
};
#endif