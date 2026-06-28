//Rohan Sharma
//CIS 1202 801
//June 28 2026

#include "Truck.h"
#include <iostream>

double Truck::getTowingCapacity() {
	return towingCapacity;
}

void Truck::setTowingCapacity(double towingCap) {
	towingCapacity = towingCap;
}
void Truck::displayInfo() { //overriding
	Vehicle::displayInfo();
	cout << "Towing capacity: " << towingCapacity << endl;
}