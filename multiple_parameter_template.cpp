#include <iostream>
#include <string>
using namespace std;

template <class T1, class T2>
class person {
public:
    T1 roll_no;
    T2 name; 
    person(T1 a, T2 b) {
        roll_no = a;
        name = b;
    }

    void display() {
        cout << "THE ROLL NUMBER OF THE STUDENT = " << roll_no << endl;
        cout << "THE NAME OF THE PERSON = " << name << endl;
    }
};
int main() {
    person<int, string> p1(23, "AMAN");
    p1.display();

    return 0;
}
