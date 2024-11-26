
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double width;
    double height;

public:
    double getWidth() const;
    void setWidth(double value);

    double getHeight() const;
    void setHeight(double value);

    double getArea() const;
    double getCircum() const;
};
#endif
