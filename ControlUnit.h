#pragma once
#include<iostream>
#include<string>
using namespace std;
#ifndef ControlUnit_H
#define ControlUnit_H

class ControlUnit {
	float cloack;
public:
	ControlUnit();
	ControlUnit(float cloack);
	void setCloack(float cloack);
	float getCloack();
	void printSpecs();
};
#endif