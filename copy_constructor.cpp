#include<iostream>
#include<string>

using namespace std;

class person{
    public:
    string name;
    string subject;
    string address;
    double house_number;
    person(string a,string b, string c,double d){
        name=a;
        subject=b;
        address=c;
        house_number=d;
    }
    person(person &oth){
        name=oth.name;
        subject=oth.subject;
        address=oth.address;
        house_number=oth.house_number;
    }
    void display(){
        cout<<"NAME = "<<name<<endl;
        cout<<"SUBJECT = "<<subject<<endl;
        cout<<"ADDRESS = "<<address<<endl;
        cout<<"HOUSE_NUMBER = "<<house_number<<endl;
    }
};
int main(){
person p1("AMAN RAWAT","C++","AMRIT VIHAR IP COLONY BUARARI DELHI 110084 ",23241);
person p2(p1);
p1.display();
cout<<endl<<"COPY CONSTRUCTOR :"<<endl<<endl;
p2.display();
    return 0;
}