#include<iostream>
#include<string>

using namespace std;

class person{
public:
double number;
double number2;
void add() {
    number=100;
    number2=200;
    cout<<"Add = "<<300<<endl;
}
void add(double a, double b){
    number=a;
    number2=b;
cout<<"Add = "<<a+b<<endl;
}
};
int main(){
    person p1;
    p1.add();
    p1.add(12000,23465);
}