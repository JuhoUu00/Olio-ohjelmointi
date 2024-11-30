#ifndef CAR_H
#define CAR_H

#include <string>
#include "Engine.h"
#include "Wheel.h"

class Car {
private:
    Engine engine;
    Wheel wheels[4];
    std::string model;
    std::string brand;

public:
    Car(const std::string& brand, const std::string& model);
    void setEngine(int horsepower, double displacement);
    void setWheels(int size, const std::string& type);
    void printDetails() const;
};

#endif // CAR_H
