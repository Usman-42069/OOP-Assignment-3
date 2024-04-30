#include"MotherBoard.h"
//#ifndef MotherBoard_H
//#define MotherBoard_H


MainMemory*  MotherBoard ::getMainMemory() const
{
	return this->mm;
}

void MotherBoard :: setMainMemory(MainMemory* mm)
{
	this->mm = mm;
}

Port MotherBoard :: getPort(int i) const
{
	return this->ports[i];
}
void MotherBoard :: printSpecs()
{
	mm->printSpecs();
	cout << "No. Of Ports : 10\n";
	cout << "5.USB Ports\n";
	cout << "2.HDMI Ports\n";
	cout << "1.VGA Port\n";
	cout << "2.I/O Ports\n";
}
//#endif