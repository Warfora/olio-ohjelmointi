#include <iostream>
#include "Car.h"

int main() {
    Car myCar("Toyota", "Corolla");

    myCar.setEngine();
    myCar.setWheels();

    myCar.printDetails();

    return 0;
}
