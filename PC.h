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
#ifndef PC_H
#define PC_H

class PC : public ComputerAssembly {
protected:
	PhysicalMemory* pm;
	GraphicsCard* gc;
	CPU* cpu;
public:
	int specs;
	string specification;
	PC();
	void printSpecs();
};
#endif