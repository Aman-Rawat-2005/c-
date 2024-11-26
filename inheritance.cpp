#include <iostream>
#include <string>
using namespace std;

class Derived {
public:
    string name = "Aman";
    string work = "Studying";
};

class Base : public Derived {
public:
    string surname = "Rawat";
};

class Base2 : public Base {
public:
int number;
    void display() {
        cout << "NAME = " << name << endl;
        cout << "WORK = " << work << endl;
        cout << "SURNAME = " << surname << endl;
    }
};

int main() {
    Base2 b1;
    b1.name="aman1";
    b1.display();
    return 0;
}
