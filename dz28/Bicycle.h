#pragma once
#include "Vehicle.h"
#include <string>

class Bicycle : public Vehicle {
private:
    string bikeType;

public:
    Bicycle(int id, float price, int maxSpeed, int year, string color, string bType);
    void printInfo() const override;
};