#include "chef.h"

Chef::Chef(const string& chefName) : name(chefName) {
    cout << "Chef konstruktori nimelle " << name << endl;
}

Chef::~Chef() {
    cout << "Chef destruktori nimelle " << name << endl;
}

void Chef::makeSalad() {
    cout << name << " is making a salad." << endl;
}

void Chef::makeSoup() {
    cout << name << " is making soup." << endl;
}


