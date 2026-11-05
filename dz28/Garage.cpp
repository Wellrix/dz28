#include "Garage.h"
#include "Car.h"
#include "Bicycle.h"
#include "Lorry.h"
#include <iostream>
#include <fstream>
#include <algorithm>

Garage::~Garage() {
    for (Vehicle* v : vehicles) {
        delete v;
    }
}

void Garage::addVehicle(Vehicle* v) {
    vehicles.push_back(v);
}

void Garage::removeVehicleById(int id) {
    for (auto it = vehicles.begin(); it != vehicles.end(); ) {
        if ((*it)->getId() == id) {
            delete* it;
            it = vehicles.erase(it);
            cout << "Vehicle with ID " << id << " has been removed.\n";
        }
        else {
            ++it;
        }
    }
}

void Garage::loadFromFile(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Error: File " << filename << " not found!\n";
        return;
    }

    string type, color, specificArg;
    int id, maxSpeed, year;
    float price;

    while (file >> type >> id >> price >> maxSpeed >> year >> color >> specificArg) {
        if (type == "Car") {
            addVehicle(new Car(id, price, maxSpeed, year, color, stoi(specificArg)));
        }
        else if (type == "Bicycle") {
            addVehicle(new Bicycle(id, price, maxSpeed, year, color, specificArg));
        }
        else if (type == "Lorry") {
            addVehicle(new Lorry(id, price, maxSpeed, year, color, stof(specificArg)));
        }
    }
    file.close();
    cout << "Data successfully loaded from file.\n";
}

void Garage::printAll() const {
    if (vehicles.empty()) {
        cout << "The garage is empty.\n";
        return;
    }
    for (const auto& v : vehicles) {
        v->printInfo();
    }
}

void Garage::searchByType(const string& type) const {
    for (const auto& v : vehicles) {
        if (v->getType() == type) v->printInfo();
    }
}

void Garage::searchById(int id) const {
    for (const auto& v : vehicles) {
        if (v->getId() == id) v->printInfo();
    }
}

void Garage::searchByTypeAndSpeed(const string& type, int speed) const {
    for (const auto& v : vehicles) {
        if (v->getType() == type && v->getMaxSpeed() == speed) v->printInfo();
    }
}

void Garage::editVehicle(int id, float newPrice, const string& newColor) {
    for (auto& v : vehicles) {
        if (v->getId() == id) {
            v->setPrice(newPrice);
            v->setColor(newColor);
            cout << "Vehicle with ID " << id << " has been updated.\n";
            return;
        }
    }
    cout << "Vehicle not found!\n";
}

void Garage::sortBySpeed() {
    sort(vehicles.begin(), vehicles.end(), [](Vehicle* a, Vehicle* b) {
        return a->getMaxSpeed() < b->getMaxSpeed();
        });
    cout << "Vehicles sorted by max speed.\n";
}