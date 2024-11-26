#include "ItalianChef.h"

// Konstruktorin toteutus
ItalianChef::ItalianChef(const QString& name) : Chef(name) {
    qDebug() << "ItalianChef" << name << "is ready to cook Italian cuisine!";
}

// Destruktorin toteutus
ItalianChef::~ItalianChef() {
    qDebug() << "ItalianChef is leaving the Italian kitchen.";
}

// Uuden jäsenfunktion toteutus
void ItalianChef::makePasta() {
    qDebug() << "ItalianChef is making pasta.";
}

// Palauttaa kokin nimen
QString ItalianChef::getName() const {
    return chefName; // Käyttää Chef-luokan yksityistä jäsenmuuttujaa
}
