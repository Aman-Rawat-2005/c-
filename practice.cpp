#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    int year;
    float mileage;

public:
    Car(string b, int y, float m) {
        brand = b;
        year = y;
        mileage = m;
    }

    void displayDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
        cout << "Mileage: " << mileage << " km" << endl;
    }
};

int main() {
    Car myCar("Toyota", 2020, 15000.5);
    myCar.displayDetails();
    return 0;
}
