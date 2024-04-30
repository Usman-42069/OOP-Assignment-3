#pragma once
#include<iostream>
#include<string>
using namespace std;


class ALU {
	int NoOfAdders;
	int NoOfSubtractor;
	int NoOfRegisters;
	int sizeOfRegisters;
public:
	ALU()
	{
		this->NoOfAdders = 1;
		this->NoOfSubtractor = 1;
		this->NoOfRegisters = 10;
		this->sizeOfRegisters = 5;
	}
	ALU(int adders , int subtractors, int registers, int sizeOfRegisters)
	{
		this->NoOfAdders = adders;
		this->NoOfRegisters = registers;
		this->NoOfSubtractor - subtractors;
		this->sizeOfRegisters = sizeOfRegisters;
	}
	void setAdders(int val)
	{
		this->NoOfAdders = val;
	}
	void setSubtractor(int val)
	{
		this->NoOfSubtractor = val;
	}
	void setRegisters(int val)
	{
		this->NoOfRegisters = val;
	}
	void setSizeOfRegisters(int val)
	{
		this->sizeOfRegisters = val;
	}
	int getAdders()
	{
		return this->NoOfAdders;
	}
	int getSubtractors()
	{
		return this->NoOfSubtractor;
	}
	int getRegisters()
	{
		return this->NoOfRegisters;
	}
	int getSizeOfRegisters()
	{
		return this->sizeOfRegisters;
	}
	void printSpecs()
	{
		cout << "No Of Adders: " << NoOfAdders << endl;
		cout << "No Of Subtractor:" << NoOfSubtractor << endl;
		cout << "No Of Registers:"	<< NoOfRegisters << endl;
		cout << "sizeOfRegisters:" << sizeOfRegisters << endl;
	}
};
class ControlUnit {
	float cloack;
public:
	ControlUnit()
	{
		this->cloack = 50;
	}
	ControlUnit(float cloack)
	{
		this->cloack = cloack;
	}
	void setCloack(float cloack)
	{
		this->cloack = cloack;
	}
	float getCloack()
	{
		return this->cloack;
	}
	void printSpecs()
	{
		cout << "Cloack: " << this->cloack <<  endl;
	}
};
class CPU {
	ALU alu;
	ControlUnit cu;
public:
	CPU()
	{
		
	}
	CPU(ALU alu, ControlUnit cu) : alu(alu), cu(cu) 
	{
	
	}

	ALU getALU() const 
	{
		return this->alu;
	}

	ControlUnit getControlUnit() const 
	{
		return this->cu;
	}

	void setALU(const ALU& alu) 
	{
		this->alu = alu;
	}

	void setControlUnit(const ControlUnit& cu) 
	{
		this->cu = cu;
	}
	void printSpecs()
	{
		alu.printSpecs();
		cu.printSpecs();
	}

};
class MainMemory {
	int capacity;
	string technologyType;
public:
	MainMemory(int capacity = 1000, string type = "Semiconductor") : capacity(capacity), technologyType(type) 
	{

	}

	int getCapacity() const 
	{
		return this->capacity;
	}

	void setCapacity(int capacity) 
	{
		this->capacity = capacity;
	}

	string getTechnologyType() const 
	{
		return this->technologyType;
	}

	void setTechnologyType(string type) 
	{
		technologyType = type;
	}
	void printSpecs()
	{
		cout << "Capacity Of MainMemory: " << this->capacity << endl;
		cout << "Type Of Technology:" << this->technologyType << endl;
	
	}

};
class Port {
	string type;
	int baud_rate;
public:
	Port(string type = "USB Port", int baud_rate = 0) : type(type), baud_rate(baud_rate) 
	{
	
	}

	string getType() const 
	{
		return this->type;
	}

	void setType(string type) 
	{
		this->type = type;
	}

	int getBaudRate() const
	{
		return this->baud_rate;
	}

	void setBaudRate(int baud_rate) 
	{
		this->baud_rate = baud_rate;
	}

};
class MotherBoard {
protected:
	MainMemory* mm;
	Port ports[10];
public:
	MotherBoard(MainMemory* mm = new MainMemory) : mm(mm)
	{
		for (int i = 0; i < 10; i++)
		{
			if(i<5)
				ports[i].setType("USB Port");
			if (i > 4 && i < 7)
				ports[i].setType("HDMI Port");
			if (i > 6 && i < 8)
				ports[i].setType("VGA Port");
			if (i > 7 && i < 10)
				ports[i].setType("I/O Port");
		}
	}
	
	MainMemory* getMainMemory() const 
	{
		return this->mm;
	}

	void setMainMemory(MainMemory* mm) 
	{
		this->mm = mm;
	}

	Port getPort(int i) const 
	{
		return this->ports[i];
	}
	void printSpecs()
	{
		mm->printSpecs();
		cout << "No. Of Ports : 10\n";
		cout << "5.USB Ports\n";
		cout << "2.HDMI Ports\n";
		cout << "1.VGA Port\n";
		cout << "2.I/O Ports\n";
	}

};
class PhysicalMemory {
	int capacity;
public:
	PhysicalMemory(int capacity = 500) : capacity(capacity) 
	{
	
	}

	int getCapacity() const 
	{
		return this->capacity;
	}

	void setCapacity(int capacity) 
	{
		this->capacity = capacity;
	}
	void printSpecs()
	{
		cout << "Capacity Of Physical Memory: \n" ;
	}
};
class GraphicsCard {
	string brand;
	int memorySize;
	double price;
public:
	GraphicsCard(string brand = "Nvidia", int memSize = 1000, double price = 1500.0) : brand(brand), memorySize(memSize), price(price)
	{}

	string getBrand() const
	{
		return this->brand;
	}

	void setBrand(string brand)
	{
		this->brand = brand;
	}

	int getMemorySize() const
	{
		return this->memorySize;
	}

	void setMemorySize(int memSize)
	{
		this->memorySize = memSize;
	}

	double getPrice() const
	{
		return this->price;
	}

	void setPrice(double price)
	{
		this->price = price;
	}
	void printSpecs()
	{
		cout << "Brand Of GraphicCard: " << this->brand << endl;
		cout << "Size Of GraphicCard:" << this->memorySize << endl;
		cout << "Price Of GraphicCard: " << this->price << " $" << endl;
	}
};
class StorageDevice {
	string type;
	int capacity;
	double price;
public:
	StorageDevice(string type = "SSD", int capacity = 512, double price = 100) : type(type), capacity(capacity), price(price)
	{

	}

	string getType() const
	{
		return this->type;
	}

	void setType(string type)
	{
		this->type = type;
	}

	int getCapacity() const
	{
		return this->capacity;
	}

	void setCapacity(int capacity)
	{
		this->capacity = capacity;
	}

	double getPrice() const
	{
		return this->price;
	}

	void setPrice(double price)
	{
		this->price = price;
	}
	void printSpecs()
	{
		cout << "Brand Of StorageDevice: " << this->type << endl;
		cout << "Capacity Of StorageDevice: " << this->capacity << " GB" << endl;
		cout << "Price Of StorageDevice: " << this->price << " $" << endl;
	}
};
class NetworkCard {
	string type;
	int speed;
	double price;
public:
	NetworkCard()
	{
		this->type = "Ethernet";
		this->speed = 400;
		this->price = 5000;

	}
	NetworkCard(string type, int speed, double price) :type(type), speed(speed), price(price)
	{}

	string getType() const
	{
		return this->type;
	}

	void setType(string type)
	{
		this->type = type;
	}

	double getSpeed() const
	{
		return this->speed;
	}

	void setSpeed(int speed)
	{
		this->speed = speed;
	}

	double getPrice() const
	{
		return this->price;
	}

	void setPrice(double price)
	{
		this->price = price;
	}

	void printSpecs()
	{
		cout << "Type Of Netword Card: " << this->type << endl;
		cout << "Speed Of Netword Card:" << this->speed << endl;
		cout << "Price Of Netword Card: " << this->price << " $" << endl;
	}

};
class PowerSupply {
	string efficiencyRating;
	int wattage;
	double price;
public:
	PowerSupply()
	{
		this->efficiencyRating = "80 plus gold";
		this->wattage = 4000;
		this->price = 500;
	}
	PowerSupply(string efficinecyRating, int wattage, double price) :efficiencyRating(efficinecyRating), wattage(wattage), price(price)
	{}
	string getEfficiencyRating() const
	{
		return this->efficiencyRating;
	}

	void setEfficiencyRating(string efficienncyRating)
	{
		this->efficiencyRating = efficiencyRating;
	}

	int getWattage() const
	{
		return this->wattage;
	}

	void setWattage(int wattage)
	{
		this->wattage = wattage;
	}

	double getPrice() const
	{
		return this->price;
	}

	void setPrice(double price)
	{
		this->price = price;
	}
	void printSpecs()
	{
		cout << "Power Supply Of Efficiency Rating: " << this->efficiencyRating << endl;
		cout << "Wattage Of Power Supply:" << this->wattage << endl;
		cout << "Price Of Power Supply: " << this->price << " $" << endl;
	}

};
class Battery {
	int capacity;
public:
	Battery()
	{
		this->capacity = 5000;
	}
	Battery(int capacity) :capacity(capacity)
	{}
	int getCapacity()
	{
		return this->capacity;
	}
	void setCapacity(int capacity)
	{
		this->capacity = capacity;
	}
	void printSpecs()
	{
		cout << "Capacity Of Battery: " << this->capacity << endl;
	}

};
class Case {
	string formFactor;
	string color;
public:
	Case()
	{
		this->formFactor = "MicroATX";
		this->color = "Black";
	}
	Case(string formFactor, string color) :formFactor(formFactor), color(color)
	{}

	string getFormFacot() const
	{
		return this->formFactor;
	}

	void setFormFactor(string formFactor)
	{
		this->formFactor = formFactor; ;
	}

	string getColor() const
	{
		return this->color;
	}

	void setColor(string color)
	{
		this->color = color;
	}
	void printSpecs()
	{
		cout << "Color Of Case: " << this->color << endl;
		cout << "Form Factor Of Case:" << this->formFactor << endl;
		
	}
};
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
	ComputerAssembly()
	{
		this->totalPrice = 50000;
	}
	void setTotalPrice(double price)
	{
		this->totalPrice = price;
	}
	double getTotalPrice()
	{
		return this->totalPrice;
	}
	
};
class PC : public ComputerAssembly {
protected:
	PhysicalMemory *pm;
	GraphicsCard* gc;
	CPU *cpu;
public:
	int specs;
	string specification;

	PC()
	{
		cpu = new CPU;
		gc = new GraphicsCard;
		pm = new PhysicalMemory;
		cout << "Enter Your Specifications:- \n";
		cout << "GraohicCard: \nEnter Type Of Graphic Card: ";
		cin >> specification;
		gc->setBrand(specification);
		cout << "Case: \nEnter Case Color: ";
		cin >> specification;
		ComputerAssembly::c.setColor(specification);
		cout << "Enter Case FromFactor:  ";
		cin >> specification;
		ComputerAssembly::c.setFormFactor(specification);
		cout << "StorageDevice: \nEnter type of StorageDevice: ";
		cin >> specification;
		ComputerAssembly::sd.setType(specification);
		cout << "NetworkCard: \nEnter the type of NetworkCard: ";
		cin >> specification;
		ComputerAssembly::nc.setType(specification);
		cout << "Battery: \nEnter the battery capacity cycle: ";
		cin >> specs;
		ComputerAssembly::b.setCapacity(specs);
	}
	void printSpecs()
	{
		cpu->printSpecs();
		gc->printSpecs();
		c.printSpecs();
		b.printSpecs();
		nc.printSpecs();
		sd.printSpecs();
		mb.printSpecs();
		ps.printSpecs();
		pm->printSpecs();
		cout << "Total Price Of Computer: " << this->getTotalPrice() << " $" << endl;
	}
};
class MAC : public ComputerAssembly{
protected:
	PhysicalMemory* pm;
	GraphicsCard* gc;
	CPU* cpu;
public:
	int specs;
	string specification;

MAC()
{
	cpu = new CPU;
		gc = new GraphicsCard;
		pm = new PhysicalMemory;
		cout << "Enter Your Specifications:- \n";
		cout << "GraohicCard: \nEnter Type Of Graphic Card: ";
		cin >> specification;
		gc->setBrand(specification);
		cout << "Case: \nEnter Case Color: ";
		cin >> specification;
		ComputerAssembly::c.setColor(specification);
		cout << "Enter Case FromFactor:  ";
		cin >> specification;
		ComputerAssembly::c.setFormFactor(specification);
		cout << "StorageDevice: \nEnter type of StorageDevice: ";
		cin >> specification;
		ComputerAssembly::sd.setType(specification);
		cout << "NetworkCard: \nEnter the type of NetworkCard: ";
		cin >> specification;
		ComputerAssembly::nc.setType(specification);
		cout << "Battery: \nEnter the battery capacity cycle: ";
		cin >> specs;
		ComputerAssembly::b.setCapacity(specs);
	}
void printSpecs()
	{
		cpu->printSpecs();
		gc->printSpecs();
		c.printSpecs();
		b.printSpecs();
		nc.printSpecs();
		sd.printSpecs();
		mb.printSpecs();
		ps.printSpecs();
		pm->printSpecs();
		cout << "Total Price Of Computer: " << this->getTotalPrice() << " $" << endl;
	}
~MAC()
	{
		delete MAC::gc;
		gc = nullptr;
	}
};
