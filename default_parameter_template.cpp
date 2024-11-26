#include<iostream>
#include<string>

using namespace std;

template<class T1=int , class T2 = float >

class add{
    public:
    T1 num1;
    T2 num2;
    add(T1 a, T2 b){
        num1 = a;
        num2 = b;
    }
    void display(){
        cout<<"THE ADDTION OF TWO NUMBER = "<<num1 + num2<<endl;
    }
};

int main(){
    add <> a1(100,9.9986);
    add <int , char> a2(1000,'A');
    a1.display();
    a2.display();
    return 0;
}