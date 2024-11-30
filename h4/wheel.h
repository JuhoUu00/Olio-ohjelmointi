#ifndef WHEEL_H
#define WHEEL_H

#include <string>

class Wheel {
private:
    int size;
    std::string type;

public:
    Wheel(int size = 0, const std::string& type = "");
    int getSize() const;
    std::string getType() const;
    void setSize(int size);
    void setType(const std::string& type);
};

#endif // WHEEL_H
