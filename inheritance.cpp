//Rohan Sharma
//CIS 1202 801
//June 28 2026

#include <iostream>

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h" //add all the headers

int main()
{
    cout << "Vehicle Program\n" << endl;

    cout << "Vehicle:" << endl; //driver for Vehicle

    string manufacturer;
    int year;
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);

    cout << "Enter the year built: ";
    cin >> year;

    while (cin.fail() || cin.peek() != '\n') { //failsafe
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Year built: ";
        cin >> year;
    }

    Vehicle v(manufacturer, year);

    v.displayInfo();
}

