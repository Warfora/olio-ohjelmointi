#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int yearModel;

public:
    Car(const string& b, const string& m, int y) : brand(b), model(m), yearModel(y) {}

    void printData() const {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << yearModel << endl;
    }
};

int main() {
    vector<Car> carList;

    Car car1("Toyota", "Corolla", 2010);
    Car car2("Fiat", "Punto", 2003);
    Car car3("Random", "Auto", 2026);

    carList.push_back(car1);
    carList.push_back(car2);
    carList.push_back(car3);

    cout << "Listan toisen alkion tiedot.:" << endl;
    carList[1].printData();

    cout << "\nKaikkien autojen tiedot :" << endl;
    for (const auto& car : carList) {
        car.printData();
    }

    return 0;
}
