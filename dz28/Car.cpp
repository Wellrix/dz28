#include "Car.h"
#include <iostream>

Car::Car(int id, float price, int maxSpeed, int year, string color, int passCap)
    : Vehicle(id, "Car", price, maxSpeed, year, color)
{
	this->passengerCapacity = passCap;
}

void Car::printInfo() const {
    cout << "[Car] ID: " << id << " | Color: " << color << " | Price: $" << price
        << " | Max Speed: " << maxSpeed << " km/h | Year: " << year
        << " | Seats: " << passengerCapacity << endl;
}