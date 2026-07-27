
#include <iostream>
using namespace std;

int main() {
    int number,i,c=0;
    cout<<"Enter number:";
    cin>>number;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    while(c<=number)
    {
        c=a+b;
        if(c<=number)
        {cout<<c<<" ";}
        a=b;
        b=c;
    }
    return 0;
}
