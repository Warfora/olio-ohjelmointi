#include <iostream>
#include "ClassB.h"
#include "AssosiationA.h"
#include "AggregationA.h"

int main() {
    int a = 5;
    int b = 10;

    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;
    cout << "b:n arvo on: " << b << " ja osoite on: " << &b << endl;

    int* myPointer = &a;
    cout << "\nPointterin osoittama osoite on: " << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;

    myPointer = &b;
    cout << "\nPointterin osoittama osoite on: " << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;

    int& refA = a;
    cout << "\nrefA osoittaa osoitteeseen on: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;

    ClassB objB;
    objB.setInfo("\nOlion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout << "\nAssosiaatio esimerkki:" << endl;
    cout << "objB: " << objB.getInfo() << endl;
    cout << "objAss: " << objAss.getBinfo() << endl;

    cout << "\nAggregaatio esimerkki:" << endl;
    ClassB &refB = objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objAggr: " << objAggr.getBinfo() << endl;

    cout << endl;

    return 0;
}