#include<iostream>
using namespace std;
class complex{
    int a, b;
    public:
    complex(int c=5, int d=7 ){
        a=c;
        b=d;
    }
    void print(){
        cout<<"the sum of numbers are "<<a<<" + "<<b<<"i"<<endl;
    }

};
int main(){
    complex c1(2);
    c1.print();
    return 0;
}