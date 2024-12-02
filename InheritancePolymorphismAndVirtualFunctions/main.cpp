// Will Hancock
// CIS 1202 501
// December 1, 2024

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>
#include <limits>

using namespace std;

// Function to validate and get a valid integer
int getValidInteger(const string& prompt, int min, int max) {
    int value;
    while (true) {
        cout << prompt;
        cin >> value;
        if (cin.fail() || value < min || value > max) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a value between " << min << " and " << max << ".\n";
        }
        else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return value;
        }
    }
}

// Function to get a valid string
string getValidString(const string& prompt) {
    string value;
    while (true) {
        cout << prompt;
        getline(cin, value);
        if (value.empty()) {
            cout << "Input cannot be empty. Please try again.\n";
        }
        else {
            return value;
        }
    }
}

int main() {
    string manufacturer;
    int yearBuilt, numberOfDoors, towingCapacity;

    // Vehicle Object
    cout << "Vehicle:\n";
    manufacturer = getValidString("Enter the manufacturer: ");
    yearBuilt = getValidInteger("Enter the year built: ", 1886, 2024);
    Vehicle vehicle(manufacturer, yearBuilt);
    cout << "\nVehicle Information:\n";
    vehicle.displayInfo();

    // Car Object
    cout << "\nCar:\n";
    manufacturer = getValidString("Enter the manufacturer: ");
    yearBuilt = getValidInteger("Enter the year built: ", 1886, 2024);
    numberOfDoors = getValidInteger("Enter the number of doors: ", 1, 5);
    Car car(manufacturer, yearBuilt, numberOfDoors);
    cout << "\nVehicle Information:\n";
    car.displayInfo();

    // Truck Object
    cout << "\nTruck:\n";
    manufacturer = getValidString("Enter the manufacturer: ");
    yearBuilt = getValidInteger("Enter the year built: ", 1886, 2024);
    towingCapacity = getValidInteger("Enter the towing capacity (in lbs): ", 100, 100000);
    Truck truck(manufacturer, yearBuilt, towingCapacity);
    cout << "\nVehicle Information:\n";
    truck.displayInfo();

    return 0;
}

