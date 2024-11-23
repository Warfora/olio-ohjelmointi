#include "Animal.h"

Animal::Animal() {
    cout << "Animal konstruktori kutsuttu" << endl;
}

Animal::~Animal() {
    cout << "Animal destruktori kutsuttu" << endl;
}

void Animal::callOut() const {
    cout << "Eläin ääntelee." << endl;
}
