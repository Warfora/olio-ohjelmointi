#ifndef CAR_H
#define CAR_H

#include <string>
#include <vector>
#include "Engine.h"
#include "Wheel.h"

class Car {
private:
    Engine engine;
    std::vector<Wheel> wheels;
    std::string model;
    std::string brand;

public:
    Car(const std::string& b, const std::string& m);
    void setEngine();
    void setWheels();
    void printDetails() const;
};

#endif // CAR_H
