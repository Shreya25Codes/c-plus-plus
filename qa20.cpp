
#include <iostream>
using namespace std;

int main() {
    int a,b;
    int* p1=&a;
    int* p2=&b;

    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;

    if(*p1>*p2)
    {
        cout<<*p1<<" is greater than "<<*p2;
    }

    else if(*p2>*p1)
    {
        cout<<*p2<<" is greater than "<<*p1;
    }

    else if(*p1==*p2)
    {
        cout<<"Both are equal";
    }

    else
    {
        cout<<"Invalid Output";
    }

return 0;
} 
