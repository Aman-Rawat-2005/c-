#include<iostream>
#include<string>
using namespace std;
template <class T>

class roll_no{
    public:
T roll;
roll_no(T r){
roll=r;
}
void display(){
    cout<<"THE ROLL NUMBER OF MY FRIEND IS = "<<roll<<endl;
}
};

int main(){
    roll_no<int> r1(1);
    roll_no<float> r2(9.9);
    r1.display();
    r2.display();
}