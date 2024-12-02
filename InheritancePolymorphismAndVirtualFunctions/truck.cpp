// Will Hancock
// CIS 1202 501
// December 1, 2024

#include "Truck.h"
#include <iostream>

Truck::Truck() : Vehicle(), towingCapacity(0) {}

Truck::Truck(const std::string& manufacturer, int yearBuilt, int towingCapacity)
    : Vehicle(manufacturer, yearBuilt), towingCapacity(towingCapacity) {}

void Truck::setTowingCapacity(int towingCapacity) {
    this->towingCapacity = towingCapacity;
}

int Truck::getTowingCapacity() const {
    return towingCapacity;
}

void Truck::displayInfo() const {
    Vehicle::displayInfo();
    std::cout << "Towing Capacity: " << towingCapacity << " lbs" << std::endl;
}
