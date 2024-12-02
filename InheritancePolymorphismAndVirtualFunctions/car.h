// Will Hancock
// CIS 1202 501
// December 1, 2024

#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int numberOfDoors;

public:
    Car();
    Car(const std::string& manufacturer, int yearBuilt, int numberOfDoors);
    void setNumberOfDoors(int numberOfDoors);
    int getNumberOfDoors() const;
    void displayInfo() const override;
};

#endif
