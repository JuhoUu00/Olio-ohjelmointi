#ifndef AGGREGATIONA_H
#define AGGREGATIONA_H

#include "ClassB.h"

class AggregationA {
private:
    ClassB &refB;  // Viittaus ClassB-olioon

public:
    AggregationA(ClassB &value);
    string getBinfo();
    void setBinfo(string value);
};

#endif
