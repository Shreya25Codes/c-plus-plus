#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number:";
    cin>>number;
    if(number%2==0)
    {
    cout<<"Even Number";
    }
    else if(number%2!=0)
    {
    cout<<"Odd Number";
    }
    else
    {
     cout<<"Invalid input";
    }
    return 0;
}
