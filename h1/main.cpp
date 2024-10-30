#include <iostream>
#include <iomanip>

// Funktio laskee ja tulostaa summan
void calcSum(int a, int b) {
    int summa = a + b;
    std::cout << "Summa: " << summa << std::endl;
}

// Funktio laskee ja tulostaa osamäärän kahden desimaalin tarkkuudella
void calcDiv(int a, int b) {
    if (b != 0) {
        double osamaara = static_cast<double>(a) / b;
        std::cout << "Osamaara: " << std::fixed << std::setprecision(2) << osamaara << std::endl;
    } else {
        std::cout << "Osamaaraa ei voida laskea, koska jakaja on nolla." << std::endl;
    }
}

// Funktio laskee ja palauttaa summan
int retSum(int a, int b) {
    return a + b;
}

// Funktio laskee ja palauttaa osamäärän (float-tyyppisenä), tulostaa virheilmoituksen ja palauttaa nollan, jos jakaja on nolla
float retDiv(int a, int b) {
    if (b != 0) {
        return static_cast<float>(a) / b;
    } else {
        std::cout << "Osamaaraa ei voida laskea, koska jakaja on nolla." << std::endl;
        return 0.0f;
    }
}

int main() {
    int a, b;

    // Pyydetään käyttäjältä kaksi kokonaislukua
    std::cout << "Syota ensimmainen kokonaisluku: ";
    std::cin >> a;

    std::cout << "Syota toinen kokonaisluku: ";
    std::cin >> b;

    // Kutsutaan laskentafunktioita, jotka tulostavat tuloksen
    calcSum(a, b);
    calcDiv(a, b);

    // Kutsutaan laskentafunktioita, jotka palauttavat tuloksen
    int summa = retSum(a, b);
    float osamaara = retDiv(a, b);

    // Tulostetaan palautetut arvot
    std::cout << "Palautettu summa: " << summa << std::endl;
    std::cout << "Palautettu osamaara: " << std::fixed << std::setprecision(2) << osamaara << std::endl;

    return 0;
}
