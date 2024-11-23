#include "Dog.h"

Dog::Dog() {
    cout << "Dog konstruktori kutsuttu" << endl;
}

Dog::~Dog() {
    cout << "Dog destruktori kutsuttu" << endl;
}

void Dog::callOut() const {
    cout << "Koira haukkuu!" << endl;
}
