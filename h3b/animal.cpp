#include "Animal.h"

#include <iostream>

// Animal-luokan toteutukset
void Animal::callOut() const {
    std::cout << "Elain aantelee." << std::endl;
}

Animal::~Animal() {
    std::cout << "Elain tuhoutuu." << std::endl;
}

// Dog-luokan toteutukset
void Dog::callOut() const {
    std::cout << "Koira haukkuu!" << std::endl;
}

Dog::~Dog() {
    std::cout << "Koira tuhoutuu." << std::endl;
}
