#pragma once
//Rohan Sharma
//CIS 1202 801
//June 28 2026

#include <string>

using namespace std;

class Vehicle {
private:
	string manufacturer;
	int yearBuilt;

public:
	Vehicle(string manufacturer, int yearBuilt) {
		this->manufacturer = manufacturer;
		this->yearBuilt = yearBuilt;
	}
	string getManufacturer();
	int getYear();

	void setManufacturer(string make);
	void setYear(int year);

	void displayInfo();
};