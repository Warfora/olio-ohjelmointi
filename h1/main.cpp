#include <iostream>
#include <iomanip>

using namespace std;

void calcSum(int x, int y) {
    cout << "Summa (calcSum): " << x + y << endl;
}

void calcDiv(int x, int y) {
    if (y == 0) {
        cout << "Jakaja ei voi olla nolla" << endl;
    } else {
        cout << "Osamäärä (calcDiv): " << fixed << setprecision(2) << static_cast<float>(x) / y << endl;
    }
}

int retSum(int x, int y) {
    return x + y;
}

float retDiv(int x, int y) {
    if (y == 0) {
        cout << "Jakaja ei voi olla nolla" << endl;
        return 0.0f;
    }
    return static_cast<float>(x) / y;
}

int main()
{
    cout << "Hello World!" << endl;

    int a, b;
    cout << "Anna ensimmäinen kokonaisluku: ";
    cin >> a;
    cout << "Anna toinen kokonaisluku: ";
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);

    int summa = retSum(a, b);
    float osamaara = retDiv(a, b);

    cout << "Summa (retSum): " << summa << endl;
    cout << "Osamäärä (retDiv): " << fixed << setprecision(2) << osamaara << endl;

    return 0;
}

