#include <iostream>
using namespace std;

template <class T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    swapValues(x, y);
    cout << "x: " << x << ", y: " << y << endl;

    double p = 1.5, q = 2.5;
    swapValues(p, q);
    cout << "p: " << p << ", q: " << q << endl;

    return 0;
}
