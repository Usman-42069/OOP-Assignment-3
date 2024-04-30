#include"StorageDevice.h"
//#ifndef StorageDevice_H
//#define StorageDevice_H

string StorageDevice ::  getType() const
{
	return this->type;
}

void StorageDevice ::  setType(string type)
{
	this->type = type;
}

int StorageDevice ::  getCapacity() const
{
	return this->capacity;
}

void StorageDevice ::  setCapacity(int capacity)
{
	this->capacity = capacity;
}

double StorageDevice ::  getPrice() const
{
	return this->price;
}

void StorageDevice ::  setPrice(double price)
{
	this->price = price;
}
void StorageDevice ::  printSpecs()
{
	cout << "Brand Of StorageDevice: " << this->type << endl;
	cout << "Capacity Of StorageDevice: " << this->capacity << " GB" << endl;
	cout << "Price Of StorageDevice: " << this->price << " $" << endl;
}
//#endif