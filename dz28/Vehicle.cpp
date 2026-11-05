#include "Vehicle.h"

Vehicle::Vehicle(int id, string type, float price, int maxSpeed, int year, string color) {
    this->id = id;
    this->type = type;
    this->price = price;
    this->maxSpeed = maxSpeed;
    this->year = year;
    this->color = color;
}

int Vehicle::getId() const 
{
    return id; 
}
string Vehicle::getType() const
{ 
    return type;
}
int Vehicle::getMaxSpeed() const 
{
    return maxSpeed;
}

void Vehicle::setPrice(float newPrice) 
{
    price = newPrice; 
}
void Vehicle::setColor(const string& newColor)
{
    color = newColor; 
}