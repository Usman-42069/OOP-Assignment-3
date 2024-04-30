#include"MainMemory.h"
//#ifndef MainMemory_H
//#define MainMemory_H

int MainMemory :: getCapacity() const
{
	return this->capacity;
}

void MainMemory :: setCapacity(int capacity)
{
	this->capacity = capacity;
}

string MainMemory :: getTechnologyType() const
{
	return this->technologyType;
}

void MainMemory :: setTechnologyType(string type)
{
	technologyType = type;
}
void MainMemory :: printSpecs()
{
	cout << "Capacity Of MainMemory: " << this->capacity << endl;
	cout << "Type Of Technology:" << this->technologyType << endl;

}
//#endif
