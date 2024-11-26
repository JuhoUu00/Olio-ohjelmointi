#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "Chef.h"

class ItalianChef : public Chef {
public:
    // Konstruktorit ja destruktori
    explicit ItalianChef(const QString& name);
    ~ItalianChef();

    // Uudet jäsenfunktiot
    void makePasta();
    QString getName() const;
};

#endif // ITALIANCHEF_H
