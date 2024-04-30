#pragma once
#include"Battery.h"
#include"Case.h"
#include"MotherBoard.h"
#include"PowerSupply.h"
#include"NetwordCard.h"
#include"StorageDevice.h"
#include<iostream>
#include<string>
using namespace std;
#ifndef ComputerAssembly_H
#define ComputerAssembly_H

class ComputerAssembly {
protected:
	MotherBoard mb;
	StorageDevice sd;
	NetworkCard nc;
	PowerSupply ps;
	Battery b;
	Case c;
	double totalPrice;
public:
	ComputerAssembly();
	void setTotalPrice(double price);
	double getTotalPrice();
};

#endif