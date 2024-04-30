#pragma once
#include<iostream>
#include<string>
using namespace std;
#ifndef ALU_H
#define ALU_H

class ALU {
	int NoOfAdders;
	int NoOfSubtractor;
	int NoOfRegisters;
	int sizeOfRegisters;
public:
	ALU();
	ALU(int adders, int subtractors, int registers, int sizeOfRegisters);
	void setAdders(int val);
	void setSubtractor(int val);
	void setRegisters(int val);
	void setSizeOfRegisters(int val);
	int getAdders();
	int getSubtractors();
	int getRegisters();
	int getSizeOfRegisters();
	void printSpecs();
};
#endif