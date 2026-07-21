#include<iostream>
using namespace std;
int main()
{
    float temp_celsius,temp_fahrenheit;
    cout<<"Enter temperature in fahrenheit:";
    cin>>temp_fahrenheit;
    temp_celsius=(temp_fahrenheit-32)*(5.0/9);
    cout<<"Temperature in celsius="<<temp_celsius;
    return 0;
}
