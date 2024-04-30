#include"PowerSupply.h"
//#ifndef PowerSupply_H
//#define PowerSupply_H
 PowerSupply :: PowerSupply()
{
	this->efficiencyRating = "80 plus gold";
	this->wattage = 4000;
	this->price = 500;
}
 PowerSupply :: PowerSupply(string efficinecyRating, int wattage, double price) :efficiencyRating(efficinecyRating), wattage(wattage), price(price)
{}
string PowerSupply ::  getEfficiencyRating() const
{
	return this->efficiencyRating;
}

void PowerSupply ::  setEfficiencyRating(string efficienncyRating)
{
	this->efficiencyRating = efficiencyRating;
}

int PowerSupply ::  getWattage() const
{
	return this->wattage;
}

void PowerSupply ::  setWattage(int wattage)
{
	this->wattage = wattage;
}

double PowerSupply ::  getPrice() const
{
	return this->price;
}

void PowerSupply ::  setPrice(double price)
{
	this->price = price;
}
void PowerSupply ::  printSpecs()
{
	cout << "Power Supply Of Efficiency Rating: " << this->efficiencyRating << endl;
	cout << "Wattage Of Power Supply:" << this->wattage << endl;
	cout << "Price Of Power Supply: " << this->price << " $" << endl;
}
//#endif