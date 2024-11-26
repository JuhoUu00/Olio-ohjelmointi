#include "Chef.h"

// Konstruktorin toteutus
Chef::Chef(const QString& name) : chefName(name) {
    qDebug() << "Chef" << chefName << "is ready!";
}

// Destruktorin toteutus
Chef::~Chef() {
    qDebug() << "Chef" << chefName << "is leaving the kitchen.";
}

// Jäsenfunktioiden toteutus
void Chef::makeSalad() {
    qDebug() << "Chef" << chefName << "is making a salad.";
}

void Chef::makeSoup() {
    qDebug() << "Chef" << chefName << "is making soup.";
}
