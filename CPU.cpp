#include"CPU.h"
//#ifndef CPU_H
//#define CPU_H

CPU :: CPU()
{

}
 CPU :: CPU(ALU alu, ControlUnit cu) : alu(alu), cu(cu)
{

}

ALU CPU ::  getALU() const
{
	return this->alu;
}

ControlUnit CPU ::  getControlUnit() const
{
	return this->cu;
}

void CPU ::  setALU(const ALU& alu)
{
	this->alu = alu;
}

void CPU ::  setControlUnit(const ControlUnit& cu)
{
	this->cu = cu;
}
void CPU ::  printSpecs()
{
	alu.printSpecs();
	cu.printSpecs();
}
//#endif
