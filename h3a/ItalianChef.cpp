#include "ItalianChef.h"

ItalianChef::ItalianChef(const string& chefName) : Chef(chefName) {
    cout << "ItalianChef konstruktori nimelle " << name << endl;
}

ItalianChef::~ItalianChef() {
    cout << "ItalianChef destruktori nimelle " << name << endl;
}

string ItalianChef::getName() const {
    return name;
}

void ItalianChef::makePasta() {
    cout << name << " is making pasta." << endl;
}




