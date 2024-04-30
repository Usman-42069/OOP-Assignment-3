#pragma once
#include"ComputerAssembly.h"
#include<iostream>
#include"string"
#include"CPU.h"
#include"PhysicalMemory.h"
#include"GraphicsCard.h"
#include<iostream>
#include<string>
using namespace std;

#ifndef MAC_H
#define MAC_H
class MAC : public ComputerAssembly{
protected:
	PhysicalMemory* pm;
	GraphicsCard* gc;
	CPU* cpu;
public:
	int specs;
	string specification;
	MAC();
	void printSpecs();
	~MAC();
};
#endif