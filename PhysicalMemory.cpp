#include"PhysicalMemory.h"
//#ifndef PhysicalMemory_H
//#define PhysicalMemory_H


int PhysicalMemory :: getCapacity() const
{
	return this->capacity;
}

void PhysicalMemory :: setCapacity(int capacity)
{
	this->capacity = capacity;
}
void PhysicalMemory :: printSpecs()
{
	cout << "Capacity Of Physical Memory: \n";
}
//#endif