#pragma once
//Rohan Sharma
//CIS 1202 801
//June 28 2026

#include "Vehicle.h"

class Car : public Vehicle { //inheritance time

private:
	int doors;
public:
	Car(string manufacturer, int year, int doors) //initialiser list
		:Vehicle(manufacturer, year), doors(doors) {
		
	}
	int getDoors();
	void setDoors(int doors); //getter and setter for this
	void displayInfo();
};