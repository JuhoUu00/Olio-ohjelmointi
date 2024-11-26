#include "Animal.h"

int main() {
    // Luodaan Animal-olio
    Animal* animal = new Animal();
    animal->callOut();
    delete animal;

    std::cout << std::endl;

    // Luodaan Dog-olio
    Animal* dog = new Dog();
    dog->callOut();
    delete dog;

    return 0;
}

