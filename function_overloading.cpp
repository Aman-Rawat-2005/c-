#include<iostream>
#include<string>

using namespace std;

class number{
    public:
    double integer;
    string name;
    void display(double n){
        integer = n;
        cout<<"NUMBER = "<<integer<<endl;
    }
    void display(string n){
        name=n;
        cout<<"NAME = "<<name<<endl;
    }
};
int main(){
number n1;
n1.display("AMAN RAWAT");
n1.display(123456);
    return 0;
}