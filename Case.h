#pragma once
#include<iostream>
#include<string>
using namespace std;
#ifndef Case_H
#define Case_H
class Case {
	string formFactor;
	string color;
public:
	Case();
	Case(string formFactor, string color);
	string getFormFacot() const;
	void setFormFactor(string formFactor);
	string getColor() const;
	void setColor(string color);
	void printSpecs();
};
#endif
