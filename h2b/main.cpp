#include <iostream>
#include <string>
#include <vector>

class Car {
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    // Konstruktori, joka alustaa jäsenmuuttujat
    Car(const std::string &brand, const std::string &model, int yearModel)
        : brand(brand), model(model), yearModel(yearModel) {}

    // Getterit
    std::string getBrand() const { return brand; }
    std::string getModel() const { return model; }
    int getYearModel() const { return yearModel; }

    // Setterit
    void setBrand(const std::string &brand) { this->brand = brand; }
    void setModel(const std::string &model) { this->model = model; }
    void setYearModel(int yearModel) { this->yearModel = yearModel; }
};

// Aliohjelma (funktio), joka tulostaa auton tiedot
void printCarData(const Car &car) {
    std::cout << "Brand: " << car.getBrand() << ", Model: " << car.getModel()
              << ", Year: " << car.getYearModel() << std::endl;
}

int main() {
    // Luodaan vektori nimeltään carList
    std::vector<Car> carList;

    // Luodaan kolme Car-oliota
    Car car1("Toyota", "Corolla", 2020);
    Car car2("Ford", "Mustang", 2018);
    Car car3("Tesla", "Model S", 2021);

    // Lisätään oliot listaan
    carList.push_back(car1);
    carList.push_back(car2);
    carList.push_back(car3);

    // Tulostetaan listan toisen alkion tiedot kutsumalla aliohjelmaa
    std::cout << "Toinen auto listassa:" << std::endl;
    printCarData(carList[1]);

    // Tulostetaan kaikkien autojen tiedot for-silmukassa kutsumalla aliohjelmaa
    std::cout << "\nKaikkien autojen tiedot:" << std::endl;
    for (const auto &car : carList) {
        printCarData(car);  // Kutsutaan aliohjelmaa jokaiselle autolle
    }

    return 0;
}
