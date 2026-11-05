#pragma once
#include "Vehicle.h"

class Lorry : public Vehicle {
private:
    float loadCapacity; 

public:
    Lorry(int id, float price, int maxSpeed, int year, string color, float loadCap);
    void printInfo() const override;
};