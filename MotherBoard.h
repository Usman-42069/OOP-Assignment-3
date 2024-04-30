#pragma once
#include"MainMemory.h"
#include"Port.h"
#include<iostream>
#include<string>
using namespace std;
#ifndef MotherBoard_H
#define MotherBoard_H

class MotherBoard {
protected:
	MainMemory* mm;
	Port ports[10];
public:
	MotherBoard(MainMemory* mm = new MainMemory) : mm(mm)
	{
		for (int i = 0; i < 10; i++)
		{
			if (i < 5)
				ports[i].setType("USB Port");
			if (i > 4 && i < 7)
				ports[i].setType("HDMI Port");
			if (i > 6 && i < 8)
				ports[i].setType("VGA Port");
			if (i > 7 && i < 10)
				ports[i].setType("I/O Port");
		}
	}
	MainMemory* getMainMemory() const;
	void setMainMemory(MainMemory* mm);
	Port getPort(int i) const;
	void printSpecs();
};
#endif