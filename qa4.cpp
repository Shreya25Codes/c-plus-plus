#include<iostream>
using namespace std;
int main()
{
    int number1,number2;
    cout<<"Enter 1st number:";
    cin>>number1;
    cout<<"Enter 2nd number:";
    cin>>number2;
    if(number1>number2)
    {
    cout<<"Number1 is greater than Number2"<<endl;
    }
    if(number2>number1)
    {
    cout<<"Number2 is greater than Number1"<<endl;
    }
    else
    {
     cout<<"Number1 and Number2 are equal";
    }
    return 0;
}
