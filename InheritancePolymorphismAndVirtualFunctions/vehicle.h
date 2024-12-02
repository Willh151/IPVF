// Will Hancock
// CIS 1202 501
// December 1, 2024

#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
class Vehicle {
protected:
    std::string manufacturer;
    int yearBuilt;

public:
    Vehicle(); // Default Constructor
    Vehicle(const std::string& manufacturer, int yearBuilt); // Parameterized Constructor
    void setManufacturer(const std::string& manufacturer);
    void setYearBuilt(int yearBuilt);
    std::string getManufacturer() const;
    int getYearBuilt() const;
    virtual void displayInfo() const;
};

#endif
