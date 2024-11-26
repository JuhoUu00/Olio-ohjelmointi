#include <QCoreApplication>
#include <iostream>
#include "Chef.h"
#include "ItalianChef.h"

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    // Luo Chef-luokasta olio
    Chef gordon("Gordon Ramsay");
    gordon.makeSalad();
    gordon.makeSoup();

    // Luo ItalianChef-luokasta olio
    ItalianChef anthony("Anthony Bourdain");
    anthony.makeSalad();
    anthony.makeSoup();
    anthony.makePasta();

    // Tulosta ItalianChef-olion nimi
    std::cout << "Chef's name is: " << anthony.getName().toStdString() << std::endl;

    return a.exec();
}
