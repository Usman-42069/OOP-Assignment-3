#pragma once
#include<iostream>
#include<string>
using namespace std;
#ifndef StorageDevice_H
#define StorageDevice_H
class StorageDevice {
	string type;
	int capacity;
	double price;
public:
	StorageDevice(string type = "SSD", int capacity = 512, double price = 100) : type(type), capacity(capacity), price(price)
	{

	}
	string getType() const;
	void setType(string type);
	int getCapacity() const;
	void setCapacity(int capacity);
	double getPrice() const;
	void setPrice(double price);
	void printSpecs();
};
#endif