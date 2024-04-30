#include"ComputerAssembly.h"
//#ifndef ComputerAssembly_H
//#define ComputerAssembly_H
ComputerAssembly :: ComputerAssembly()
{
	this->totalPrice = 50000;
}
void ComputerAssembly:: setTotalPrice(double price)
{
	this->totalPrice = price;
}
double ComputerAssembly:: getTotalPrice()
{
	return this->totalPrice;
}
//#endif