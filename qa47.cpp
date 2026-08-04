#include<iostream>
using namespace std;
int main()
{
int ch;
float temp_fahrenheit,temp_celsius,temp;
cout<<"Enter temperature:";
cin>>temp;
cout << "1. Celsius to Fahrenheit\n";
cout << "2. Fahrenheit to Celsius\n";
cout<<"Enter your choice";
cin>>ch;
switch(ch)
{
case 1:cout<<"Celsius to Fahrenheit Conversion:";
       temp_fahrenheit=(1.8*temp)+32;
       cout<<"\n Temperature in Fahrenheit:"<<temp_fahrenheit<<" degrees Fahrenheit.";
       break;
case 2:cout<<"Fahrenheit to Celsius Conversion:";
       temp_celsius=(temp-32)/1.8;
       cout<<"\n Tempera ture in Celsius:"<<temp_celsius<<" degree Celsius";
       break;

default:
{
    cout<<"Enter valid choice.";
}
}
return 0;
} 
