#include "chef.h"
#include "ItalianChef.h"
#include <iostream>

using namespace std;

int main() {
    Chef chef("Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();

    cout << "*****************************" << endl;

    ItalianChef italianChef("Anthony Bourdain");
    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();
    cout << "Chef name: " << italianChef.getName() << endl;

    return 0;
}



