// Will Hancock
// CIS 1202 501
// December 1, 2024

#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
private:
    int towingCapacity;

public:
    Truck();
    Truck(const std::string& manufacturer, int yearBuilt, int towingCapacity);
    void setTowingCapacity(int towingCapacity);
    int getTowingCapacity() const;
    void displayInfo() const override;
};

#endif
