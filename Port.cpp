#include"Port.h"
//#ifndef Port_H
//#define Port_H

string Port :: getType() const
{
	return this->type;
}

void Port :: setType(string type)
{
	this->type = type;
}

int Port :: getBaudRate() const
{
	return this->baud_rate;
}

void Port :: setBaudRate(int baud_rate)
{
	this->baud_rate = baud_rate;
}
//#endif
