#pragma once
#include "Vehicle.h"
#include <vector>
#include <string>

using namespace std;

class Garage {
private:
    vector<Vehicle*> vehicles;

public:
    ~Garage();
    void addVehicle(Vehicle* v);
    void removeVehicleById(int id);
    void loadFromFile(const string& filename);
    void printAll() const;
    void searchByType(const string& type) const;
    void searchById(int id) const;
    void searchByTypeAndSpeed(const string& type, int speed) const;
    void editVehicle(int id, float newPrice, const string& newColor); 
    void sortBySpeed();
};