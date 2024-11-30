#include "Car.h"
#include <iostream>

Car::Car(const std::string& brand, const std::string& model)
    : brand(brand), model(model) {}

void Car::setEngine(int horsepower, double displacement) {
    engine.setHorsepower(horsepower);
    engine.setDisplacement(displacement);
}

void Car::setWheels(int size, const std::string& type) {
    for (int i = 0; i < 4; i++) {
        wheels[i].setSize(size);
        wheels[i].setType(type);
    }
}

void Car::printDetails() const {
    std::cout << "Auto: " << brand << " " << model << "\n";
    std::cout << "Moottori: " << engine.getHorsepower() << " HP, "
              << engine.getDisplacement() << " L\n";

    for (int i = 0; i < 4; i++) {
        std::cout << "Rengas " << i + 1 << ": "
                  << wheels[i].getSize() << " Tuumaa, "
                  << wheels[i].getType() << "\n";

    }
}
