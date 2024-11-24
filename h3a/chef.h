#ifndef CHEF_H
#define CHEF_H

#include <QString>
#include <QDebug>

class Chef {
public:
    // Konstruktorit ja destruktori
    explicit Chef(const QString& name);
    ~Chef();

    // Jäsenfunktiot
    void makeSalad();
    void makeSoup();

private:
    QString chefName;
};

#endif // CHEF_H
