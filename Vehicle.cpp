//Rohan Sharma
//CIS 1202 801
//June 28 2026

#include "Vehicle.h"


string Vehicle::getManufacturer() {
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

