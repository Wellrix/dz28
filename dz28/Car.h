#pragma once
#include "Vehicle.h"

class Car : public Vehicle {
private:
    int passengerCapacity;

public:
    Car(int id, float price, int maxSpeed, int year, string color, int passCap);
    void printInfo() const override;
};