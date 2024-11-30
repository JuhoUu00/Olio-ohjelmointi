#include <iostream>
#include "Car.h"

int main() {
    Car car("Toyota", "Corolla");

    car.setEngine(150, 2.0);
    car.setWheels(17, "kesarengas");

    car.printDetails();

    return 0;
}
