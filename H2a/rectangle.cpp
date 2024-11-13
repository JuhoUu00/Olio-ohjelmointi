
#include "Rectangle.h"

double Rectangle::getWidth() const { return width; }
void Rectangle::setWidth(double value) { width = value; }

double Rectangle::getHeight() const { return height; }
void Rectangle::setHeight(double value) { height = value; }

double Rectangle::getArea() const { return width * height; }
double Rectangle::getCircum() const { return 2 * (width + height); }
