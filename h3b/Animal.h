#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    Animal();
    virtual ~Animal();

    virtual void callOut() const;
};

#endif // ANIMAL_H

