#pragma once
#include <string>

using namespace std;

class Vehicle {
protected:
    int id;
    string type;
    float price; 
    int maxSpeed;
    int year;
    string color;

public:
    Vehicle(int id, string type, float price, int maxSpeed, int year, string color);
    virtual ~Vehicle() = default;

    virtual void printInfo() const = 0;

    int getId() const;
    string getType() const;
    int getMaxSpeed() const;

    void setPrice(float newPrice); 
    void setColor(const string& newColor);
};