#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    std::string getBrand() const;
    void setBrand(const std::string &value);

    std::string getModel() const;
    void setModel(const std::string &value);

    int getYearModel() const;
    void setYearModel(int value);

    void printData() const;
};
#endif
