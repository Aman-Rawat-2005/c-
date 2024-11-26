#include<iostream>
#include<string>

using namespace std;

class parent{
    public:
    int a;
    void display(int n){
    a=n;
    cout<<"NUMBER = "<<a<<endl;
    }
};

class child : public parent{
    public:
    int b;
    void display(int m){
    b=m;
    cout<<"NUMBER = "<<b<<endl;
    }
};

int main(){
    parent p1;
    child c1;
    p1.display(30);
    c1.display(40);
    return 0;
}