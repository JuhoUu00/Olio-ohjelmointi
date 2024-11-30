#ifndef ENGINE_H
#define ENGINE_H

class Engine {
private:
    int horsepower;
    double displacement;

public:
    Engine(int horsepower = 0, double displacement = 0.0);
    int getHorsepower() const;
    double getDisplacement() const;
    void setHorsepower(int horsepower);
    void setDisplacement(double displacement);
};

#endif // ENGINE_H
