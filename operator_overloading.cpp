#include<iostream>
#include<string>

using namespace std;

class number{
    public:
    double value;
    number(double n)
        {
    value = n;
    }
    number operator + (const number &oth){
       cout<<value+oth.value;
       return 0;
    }
};

int main(){
    number p1(1000);
    number p2(23920);
    number p3=p1+p2;

    return 0;
}