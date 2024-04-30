#include"GraphicsCard.h"
//#ifndef GraphicsCard_H
//#define GraphicsCard_H


string GraphicsCard ::  getBrand() const
{
	return this->brand;
}

void GraphicsCard ::  setBrand(string brand)
{
	this->brand = brand;
}

int GraphicsCard ::  getMemorySize() const
{
	return this->memorySize;
}

void GraphicsCard ::  setMemorySize(int memSize)
{
	this->memorySize = memSize;
}

double  GraphicsCard :: getPrice() const
{
	return this->price;
}

void GraphicsCard ::  setPrice(double price)
{
	this->price = price;
}
void  GraphicsCard :: printSpecs()
{
	cout << "Brand Of GraphicCard: " << this->brand << endl;
	cout << "Size Of GraphicCard:" << this->memorySize << endl;
	cout << "Price Of GraphicCard: " << this->price << " $" << endl;
}
//#endif