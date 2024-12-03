#include <iostream>
#include "ClassB.h"
#include "AssosiationA.h"
#include "AggregationA.h"

using namespace std;

int main() {
    // Vaihe 1: Muuttujien osoitteet ja arvot
    int a = 5, b = 10;
    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;
    cout << "b:n arvo on: " << b << " ja osoite on: " << &b << endl;

    int* myPointer = &a;
    cout << "Pointterin osoittama osoite on: " << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;

    myPointer = &b;
    cout << "Pointterin osoittama osoite on: " << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;

    int& refA = a;
    cout << "refA osoittaa osoitteeseen on: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;
    cout << endl;

    // Vaihe 2: Assosiaatio
    ClassB objB;
    objB.setInfo("Olion B asettama info");
    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout << "*******************************" << endl;
    cout << "Assosiaatio esimerkki:" << endl;
    cout << "objB: " << objB.getInfo() << endl;
    cout << "objAss: " << objAss.getBinfo() << endl;

    // Vaihe 3: Aggregaatio
    AggregationA objAggr(objB);
    objAggr.setBinfo("Olion Agr asettama info");

    cout << "*******************************" << endl;
    cout << "Aggregaatio esimerkki:" << endl;
    cout << "objB: " << objB.getInfo() << endl;
    cout << "objAggr: " << objAggr.getBinfo() << endl;

    return 0;
}
