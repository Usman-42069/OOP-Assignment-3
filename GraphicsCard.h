#include<iostream>
#include<string>
using namespace std;
#ifndef GraphicsCard_H
#define GraphicsCard_H

#pragma once
using namespace std;
class GraphicsCard {
	string brand;
	int memorySize;
	double price;
public:
	string getBrand() const;
	void setBrand(string brand);
	int getMemorySize() const;
	void setMemorySize(int memSize);
	double getPrice() const;
	void setPrice(double price);
	void printSpecs();
	GraphicsCard(string brand = "Nvidia", int memSize = 1000, double price = 1500.0) : brand(brand), memorySize(memSize), price(price)
	{}
};

#endif