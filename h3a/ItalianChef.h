#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"
#include <string>

using namespace std;

class ItalianChef : public Chef {
public:
    ItalianChef(const string& chefName);
    ~ItalianChef();

    string getName() const;
    void makePasta();
};

#endif // ITALIANCHEF_H


