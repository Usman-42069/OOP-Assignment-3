#include"ControlUnit.h"
//#ifndef ControlUnit_H
//#define ControlUnit_H
 ControlUnit :: ControlUnit()
{
	this->cloack = 50;
}
 ControlUnit :: ControlUnit(float cloack)
{
	this->cloack = cloack;
}
void ControlUnit ::  setCloack(float cloack)
{
	this->cloack = cloack;
}
float ControlUnit ::  getCloack()
{
	return this->cloack;
}
void ControlUnit ::  printSpecs()
{
	cout << "Cloack: " << this->cloack << endl;
}
//#endif