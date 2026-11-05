#include "Lorry.h"
#include <iostream>

Lorry::Lorry(int id, float price, int maxSpeed, int year, string color, float loadCap)
    : Vehicle(id, "Lorry", price, maxSpeed, year, color)
{
	this->loadCapacity = loadCap;
}

void Lorry::printInfo() const {
    cout << "[Lorry] ID: " << id << " | Color: " << color << " | Price: $" << price
        << " | Max Speed: " << maxSpeed << " km/h | Year: " << year
        << " | Load Capacity: " << loadCapacity << " t" << endl;
}