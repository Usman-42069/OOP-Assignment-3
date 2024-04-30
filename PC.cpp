#include"PC.h"
//#ifndef PC_H
//#define PC_H
PC :: PC()
{
	cpu = new CPU;
	gc = new GraphicsCard;
	pm = new PhysicalMemory;
	cout << "Enter Your Specifications:- \n";
	do {
		cout << "GraphicCard: \nEnter Type Of Graphic Card (Nvidia / AMD): ";
		cin >> specification;
	} while ((specification != "Nvidia") && (specification != "AMD"));

	gc->setBrand(specification);
	cout << "Case: \nEnter Case Color: ";
	cin >> specification;
	ComputerAssembly::c.setColor(specification);
	do {
		cout << "Enter Case FromFactor: (ATX / Micro ATX)  ";
		getline(cin, specification);
	}while ((specification != "ATX") && (specification != "Micro ATX"));
	ComputerAssembly::c.setFormFactor(specification);
	do {
		cout << "StorageDevice: \nEnter type of StorageDevice: (HDD / SSD) ";
		cin >> specification;
	}while ((specification != "HDD") && (specification != "SSD"));
	ComputerAssembly::sd.setType(specification);
	do {
	cout << "NetworkCard: \nEnter the type of NetworkCard: (Ethernet / WiFi) ";
	cin >> specification;
	} while ((specification != "Ethernet") && (specification != "WiFi"));
	ComputerAssembly::nc.setType(specification);
	cout << "Battery: \nEnter the battery capacity cycle: ";
	cin >> specs;
	ComputerAssembly::b.setCapacity(specs);
}
void PC :: printSpecs()
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
//#endif