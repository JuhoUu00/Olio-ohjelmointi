#include "Engine.h"

Engine::Engine(int horsepower, double displacement)
    : horsepower(horsepower), displacement(displacement) {}

int Engine::getHorsepower() const {
    return horsepower;
}

double Engine::getDisplacement() const {
    return displacement;
}

void Engine::setHorsepower(int horsepower) {
    this->horsepower = horsepower;
}

void Engine::setDisplacement(double displacement) {
    this->displacement = displacement;
}
