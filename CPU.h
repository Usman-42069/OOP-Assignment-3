#pragma once
#include"ALU.h"
#include"ControlUnit.h"
#include<iostream>
#include<string>
using namespace std;
#ifndef CPU_H
#define CPU_H

class CPU {
	ALU alu;
	ControlUnit cu;
public:
	CPU();
	CPU(ALU alu, ControlUnit cu);
	ALU getALU() const;
	ControlUnit getControlUnit() const;
	void setALU(const ALU& alu);
	void setControlUnit(const ControlUnit& cu);
	void printSpecs();
};
#endif