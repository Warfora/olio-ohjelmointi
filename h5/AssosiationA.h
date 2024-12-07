#ifndef ASSOCIATIONA_H
#define ASSOCIATIONA_H

#include "ClassB.h"

class AssosiationA {
private:
    ClassB objectB;
public:
    AssosiationA(ClassB);
    string getBinfo();
    void setBinfo(string);
};

#endif
