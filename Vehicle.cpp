//Rohan Sharma
//CIS 1202 801
//June 28 2026

#include "Vehicle.h"
#include <iostream>

string Vehicle::getManufacturer() { //effectively using namespace Vehicle
	return manufacturer;
}

int Vehicle::getYear() {
	return yearBuilt;
}

void Vehicle::setManufacturer(string make) {
	manufacturer = make;
}

void Vehicle::setYear(int year) {
	yearBuilt = year;
}

void Vehicle::displayInfo() {
	cout << "Manufacturer: "s + manufacturer << endl;
	cout << "Year built: "s << yearBuilt << endl;
	
}