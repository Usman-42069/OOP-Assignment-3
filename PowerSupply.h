#pragma once
#include<iostream>
#include<string>
using namespace std;
#ifndef PowerSupply_H
#define PowerSupply_H
class PowerSupply {
	string efficiencyRating;
	int wattage;
	double price;
public:
	PowerSupply();
	PowerSupply(string efficinecyRating, int wattage, double price);
	string getEfficiencyRating() const;
	void setEfficiencyRating(string efficienncyRating);
	int getWattage() const;
	void setWattage(int wattage);
	double getPrice() const;
	void setPrice(double price);
	void printSpecs();
};
#endif