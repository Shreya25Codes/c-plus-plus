#include<iostream>
using namespace std;
int main()
{
    float temp_celsius,temp_fahrenheit;
    cout<<"Enter temperature in celsius:";
    cin>>temp_celsius;
    temp_fahrenheit=(temp_celsius*(9.0/5))+32;
    cout<<"Temperature in fahrenheit="<<temp_fahrenheit;
    return 0;
}
