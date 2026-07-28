
#include <iostream>
using namespace std;

int main() {
    int a,b;
    int temp1;
    int* p1=&a;
    int* p2=&b;

    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:"<<endl;
    cin>>b;
    cout<<"Numbers before swap are :"<<a<<" and "<<b<<endl;
    temp1=a;
    a=*p2;
    *p2=temp1;
    cout<<"Numbers after swap are :"<<a<<" and "<<b;
    return 0;
}
