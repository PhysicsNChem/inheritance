#pragma once
//Rohan Sharma
//CIS 1202 801
//June 28 2026

#include "Vehicle.h"

class Truck : public Vehicle {
private:
	double towingCapacity;
public:
	Truck(string manufacturer, int year, double towingCapacity)
		:Vehicle(manufacturer, year), towingCapacity(towingCapacity) {

	}
	double getTowingCapacity();
	void setTowingCapacity(double towingCap);
};