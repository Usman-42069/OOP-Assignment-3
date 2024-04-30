#include"Case.h"
//#ifndef Case_H
//#define Case_H
	 Case:: Case()
	{
		this->formFactor = "MicroATX";
		this->color = "Black";
	}
	 Case:: Case(string formFactor, string color) :formFactor(formFactor), color(color)
	{}

	string Case::  getFormFacot() const
	{
		return this->formFactor;
	}

	void Case::  setFormFactor(string formFactor)
	{
		this->formFactor = formFactor; ;
	}

	string Case::  getColor() const
	{
		return this->color;
	}

	void  Case:: setColor(string color)
	{
		this->color = color;
	}
	void  Case:: printSpecs()
	{
		cout << "Color Of Case: " << this->color << endl;
		cout << "Form Factor Of Case:" << this->formFactor << endl;

	}
//#endif