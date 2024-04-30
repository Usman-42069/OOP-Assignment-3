#include"NetwordCard.h"
//#ifndef NetworkCard_H
//#define NetworkCard_H
 NetworkCard :: NetworkCard()
{
	this->type = "Ethernet";
	this->speed = 400;
	this->price = 5000;

}
 NetworkCard :: NetworkCard(string type, int speed, double price) :type(type), speed(speed), price(price)
{}

string NetworkCard ::  getType() const
{
	return this->type;
}

void NetworkCard ::  setType(string type)
{
	this->type = type;
}

double NetworkCard ::  getSpeed() const
{
	return this->speed;
}
 
void NetworkCard ::  setSpeed(int speed)
{
	this->speed = speed;
}

double NetworkCard ::  getPrice() const
{
	return this->price;
}

void NetworkCard ::  setPrice(double price)
{
	this->price = price;
}

void NetworkCard ::  printSpecs()
{
	cout << "Type Of Netword Card: " << this->type << endl;
	cout << "Speed Of Netword Card:" << this->speed << endl;
	cout << "Price Of Netword Card: " << this->price << " $" << endl;
}
//#endif