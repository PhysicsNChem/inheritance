//Rohan Sharma
//CIS 1202 801
//June 28 2026

#include "Car.h"
#include <iostream>
int Car::getDoors() {
	return doors;
}

void Car::setDoors(int doors) {
	this->doors = doors;
}
void Car::displayInfo() { //overriding
	Vehicle::displayInfo();
	cout << "Doors: " << doors << endl;
}