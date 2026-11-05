#include "Bicycle.h"
#include <iostream>

Bicycle::Bicycle(int id, float price, int maxSpeed, int year, string color, string bType)
    : Vehicle(id, "Bicycle", price, maxSpeed, year, color)
{
	this->bikeType = bType; 
}

void Bicycle::printInfo() const {
    cout << "[Bicycle] ID: " << id << " | Color: " << color << " | Price: $" << price
        << " | Max Speed: " << maxSpeed << " km/h | Year: " << year
        << " | Type: " << bikeType << endl;
}