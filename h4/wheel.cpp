#include "Wheel.h"

Wheel::Wheel(int size, const std::string& type)
    : size(size), type(type) {}

int Wheel::getSize() const {
    return size;
}

std::string Wheel::getType() const {
    return type;
}

void Wheel::setSize(int size) {
    this->size = size;
}

void Wheel::setType(const std::string& type) {
    this->type = type;
}
