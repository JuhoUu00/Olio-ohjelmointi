#include <iostream>
#include <memory>
#include "Car.h"
#include "Rectangle.h"
#include "Student.h"

int main() {
    // Car-olio pinomuistiin
    Car myCar;
    myCar.setBrand("Toyota");
    myCar.setModel("Corolla");
    myCar.setYearModel(2020);
    myCar.printData();

    // Rectangle-olio kekomuistiin
    Rectangle *myRectangle = new Rectangle();
    myRectangle->setWidth(10.5);
    myRectangle->setHeight(5.2);
    std::cout << "Area: " << myRectangle->getArea() << std::endl;
    std::cout << "Circumference: " << myRectangle->getCircum() << std::endl;
    delete myRectangle; // Muistin vapautus

    // Student-olio älyosoittimella
    std::unique_ptr<Student> myStudent = std::make_unique<Student>();
    myStudent->setName("Alice");
    myStudent->setStudentNumber(12345);
    myStudent->setAverage(4.2);
    std::cout << "Name: " << myStudent->getName() << ", Student Number: "
              << myStudent->getStudentNumber() << ", Average: " << myStudent->getAverage() << std::endl;

    return 0;
}
