// Will Hancock
// CIS 1202 501
// December 1, 2024

#include "Car.h"
#include <iostream>

Car::Car() : Vehicle(), numberOfDoors(0) {}

Car::Car(const std::string& manufacturer, int yearBuilt, int numberOfDoors)
    : Vehicle(manufacturer, yearBuilt), numberOfDoors(numberOfDoors) {}

void Car::setNumberOfDoors(int numberOfDoors) {
    this->numberOfDoors = numberOfDoors;
}

int Car::getNumberOfDoors() const {
    return numberOfDoors;
}

void Car::displayInfo() const {
    Vehicle::displayInfo();
    std::cout << "Number of Doors: " << numberOfDoors << std::endl;
}
