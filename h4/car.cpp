#include "Car.h"
#include <iostream>

Car::Car(const std::string& b, const std::string& m) : brand(b), model(m), wheels(4) {}

void Car::setEngine() {
    engine.setHorsepower(150);
    engine.setDisplacement(2.0);
}

void Car::setWheels() {
    for (auto& wheel : wheels) {
        wheel.setSize(17);
        wheel.setType("kesärengas");
    }
}

void Car::printDetails() const {
    std::cout << "Auto: " << brand << " " << model << "\n";
    std::cout << "Moottori: " << engine.getHorsepower() << " hp, "
              << engine.getDisplacement() << " L\n";
    for (const auto& wheel : wheels) {
        std::cout << "Rengas: " << wheel.getSize() << " tuumaa, " << wheel.getType() << "\n";
    }
}
