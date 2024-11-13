#include "test.h"

test::test() {}

std::string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const std::string &newBrand)
{
    brand = newBrand;
}
