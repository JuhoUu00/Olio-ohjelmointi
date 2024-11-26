#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

// Kantaluokka Animal
class Animal {
public:
    virtual void callOut() const;
    virtual ~Animal();
};

// Periytyvä luokka Dog
class Dog : public Animal {
public:
    void callOut() const override;
    ~Dog() override;
};

#endif // ANIMAL_H
