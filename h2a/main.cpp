#include <iostream>
#include <string>
#include <memory> 
using namespace std;

class Car {
private:
    string brand;
    string model;
    int yearModel;

public:
    void printData() const {
        cout << "Brand: " << brand << "\n"
             << "Model: " << model << "\n"
             << "Year: " << yearModel << endl;
    }

    void setBrand(const string& b) {
        brand = b;
    }

    void setModel(const string& m) {
        model = m;
    }

    void setYearModel(int y) {
        yearModel = y;
    }
};

class Rectangle {
private:
    double width;
    double height;

public:
    double getArea() const {
        return width * height;
    }

    double getCircum() const {
        return 2 * (width + height);
    }

    void setWidth(double w) {
        width = w;
    }

    void setHeight(double h) {
        height = h;
    }
};

class Student {
public:
    string getName() const;
    void setName(const string &newName);
    int getStudentNumber() const;
    void setStudentNumber(int newStudentNumber);
    double getAverage() const;
    void setAverage(double newAverage);

private:
    string name;
    int studentNumber;
    double average;

};

string Student::getName() const
{
    return name;
}

void Student::setName(const string &newName)
{
    name = newName;
}

int Student::getStudentNumber() const
{
    return studentNumber;
}

void Student::setStudentNumber(int newStudentNumber)
{
    studentNumber = newStudentNumber;
}

double Student::getAverage() const
{
    return average;
}

void Student::setAverage(double newAverage)
{
    average = newAverage;
}

int main() {
    Car myCar;
    myCar.setBrand("Toyota");
    myCar.setModel("Corolla");
    myCar.setYearModel(2020);
    myCar.printData();

    Rectangle* rect = new Rectangle;
    rect->setWidth(5.0);
    rect->setHeight(3.0);

    cout << "\n Area: " << rect->getArea() << endl;
    cout << "Circumference: " << rect->getCircum() << endl;

    delete rect;

    unique_ptr<Student> student = make_unique<Student>();
    student->setName("Meitsi Mallinen");
    student->setStudentNumber(12345);
    student->setAverage(4.2);

    cout << "\nStudent Name: " << student->getName() << endl;
    cout << "Student Number: " << student->getStudentNumber() << endl;
    cout << "Average: " << student->getAverage() << endl;

    return 0;
}
