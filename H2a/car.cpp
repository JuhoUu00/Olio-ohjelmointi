#include "Car.h"

std::string Car::getBrand() const {
    return brand;
}

void Car::setBrand(const std::string &value) {
    brand = value;
}

std::string Car::getModel() const {
    return model;
}

void Car::setModel(const std::string &value) {
    model = value;
}

int Car::getYearModel() const {
    return yearModel;
}

void Car::setYearModel(int value) {
    yearModel = value;
}
