#include<iostream>
#include<string>

using namespace std;

class add{
    public:
    double n1=10;
    double n2=20;
    double n3=30;
    add(){
    cout<<"addition of all number = "<<n1+n2+n3<<endl;
    }
    add(double a){
        n1=a;
        cout<<"Addition of All number = "<<n1+n2+n3<<endl;
    }
    add(double a,double b){
    n1=a;
    n2=b;
      cout<<"Addition of All number = "<<n1+n2+n3<<endl;
    }
    add(double a,double b,double c){
    n1=a;
    n2=b;
    n3=c;
      cout<<"Addition of All number = "<<n1+n2+n3<<endl;
    }
};
int  main(){
add a1;
add a2(1200);
add a3(12003,89076);
add a4(257699,6789,6309);
    return 0;
}