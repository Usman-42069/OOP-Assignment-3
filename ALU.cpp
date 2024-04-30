#include"ALU.h"
//#ifndef ALU_H
//#define ALU_H
ALU::ALU()
{
	this->NoOfAdders = 1;
	this->NoOfSubtractor = 1;
	this->NoOfRegisters = 10;
	this->sizeOfRegisters = 5;
}
ALU :: ALU(int adders, int subtractors, int registers, int sizeOfRegisters)
{
	this->NoOfAdders = adders;
	this->NoOfRegisters = registers;
	this->NoOfSubtractor - subtractors;
	this->sizeOfRegisters = sizeOfRegisters;
}
void ALU:: setAdders(int val)
{
	this->NoOfAdders = val;
}
void ALU:: setSubtractor(int val)
{
	this->NoOfSubtractor = val;
}
void ALU:: setRegisters(int val)
{
	this->NoOfRegisters = val;
}
void ALU::setSizeOfRegisters(int val)
{
	this->sizeOfRegisters = val;
}
int ALU:: getAdders()
{
	return this->NoOfAdders;
}
int ALU:: getSubtractors()
{
	return this->NoOfSubtractor;
}
int ALU::getRegisters()
{
	return this->NoOfRegisters;
}
int ALU:: getSizeOfRegisters()
{
	return this->sizeOfRegisters;
}
void ALU::printSpecs()
{
	cout << "No Of Adders: " << NoOfAdders << endl;
	cout << "No Of Subtractor:" << NoOfSubtractor << endl;
	cout << "No Of Registers:" << NoOfRegisters << endl;
	cout << "sizeOfRegisters:" << sizeOfRegisters << endl;
}
