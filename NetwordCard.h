#pragma once
#include<iostream>
#include<string>
using namespace std;
#ifndef NetworkCard_H
#define NetworkCard_H
class NetworkCard {
	string type;
	int speed;
	double price;
public:
	NetworkCard();
	NetworkCard(string type, int speed, double price);
	string getType() const;
	void setType(string type);
	double getSpeed() const;
	void setSpeed(int speed);
	double getPrice() const;
	void setPrice(double price);
	void printSpecs();
};
#endif