#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2st number:";
    cin>>b;
    cout<<"Numbers before swappig:"<<a<<" "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Numbers after swappig:"<<a<<" "<<b;
    return 0;
}
