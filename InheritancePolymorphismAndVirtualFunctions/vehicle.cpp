// Will Hancock
// CIS 1202 501
// December 1, 2024

#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle() : manufacturer("Unknown"), yearBuilt(0) {}

Vehicle::Vehicle(const std::string& manufacturer, int yearBuilt)
    : manufacturer(manufacturer), yearBuilt(yearBuilt) {}

void Vehicle::setManufacturer(const std::string& manufacturer) {
    this->manufacturer = manufacturer;
}

void Vehicle::setYearBuilt(int yearBuilt) {
    this->yearBuilt = yearBuilt;
}

std::string Vehicle::getManufacturer() const {
    return manufacturer;
}

int Vehicle::getYearBuilt() const {
    return yearBuilt;
}

void Vehicle::displayInfo() const {
    std::cout << "Manufacturer: " << manufacturer << "\nYear Built: " << yearBuilt << std::endl;
}
