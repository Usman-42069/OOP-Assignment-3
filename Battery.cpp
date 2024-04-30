#include"Battery.h"
//#ifndef Battery_H
//#define Battery_H

 Battery :: Battery()
{
	this->capacity = 5000;
}
 Battery :: Battery(int capacity) :capacity(capacity)
{}
int Battery ::  getCapacity()
{
	return this->capacity;
}
void Battery ::  setCapacity(int capacity)
{
	this->capacity = capacity;
}
void Battery ::  printSpecs()
{
	cout << "Capacity Of Battery: " << this->capacity << endl;
}
//#endif