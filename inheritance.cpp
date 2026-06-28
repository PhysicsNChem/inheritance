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



    cout << "\nCar:" << endl; //driver for Car

    cin.ignore(); //since the last cin was direct to number
    int doors;
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer); //use the same local variable

    cout << "Enter the year built: ";
    cin >> year;

    while (cin.fail() || cin.peek() != '\n') { //failsafe
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Year built: ";
        cin >> year;
    }
    cout << "Enter the number of doors: ";
    cin >> doors;

    while (cin.fail() || cin.peek() != '\n') { //failsafe
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Doors: ";
        cin >> doors;
    }

    Car c(manufacturer, year, doors);

    c.displayInfo();




    cout << "\nTruck:" << endl; //driver for Truck

    cin.ignore(); //since the last cin was direct to number
    double towingCapacity;
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer); //use the same local variable

    cout << "Enter the year built: ";
    cin >> year;

    while (cin.fail() || cin.peek() != '\n') { //failsafe
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Year built: ";
        cin >> year;
    }
    cout << "Enter the towing capacity: ";
    cin >> towingCapacity;

    while (cin.fail() || cin.peek() != '\n') { //failsafe
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Towing capacity: ";
        cin >> towingCapacity;
    }

    Truck t(manufacturer, year, towingCapacity);

    t.displayInfo();

}

