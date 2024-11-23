#include "Animal.h"
#include "Dog.h"

int main() {
    Animal* animal = new Animal();
    animal->callOut();
    delete animal;

    cout << "*****************************" << endl;

    Animal* dog = new Dog();
    dog->callOut();
    delete dog;

    return 0;
}
