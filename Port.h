#include<iostream>
using namespace std;
#include<string>
#ifndef Port_H
#define Port_H
#pragma once
class Port {
	string type;
	int baud_rate;
public:
	Port(string type = "USB Port", int baud_rate = 0) : type(type), baud_rate(baud_rate)
	{

	}
	string getType() const;
	void setType(string type);
	int getBaudRate() const;
	void setBaudRate(int baud_rate);

};

#endif
