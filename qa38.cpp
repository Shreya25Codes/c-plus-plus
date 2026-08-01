#include <iostream>
 using namespace std;
 void max(int a,int b);
 int main() {
     int num1,num2;
     cout<<"Enter first number:";
     cin>>num1;
     cout<<"Enter second number:";
     cin>>num2;
     max(num1,num2);
     return 0;
 }

 void max(int num1,int num2)
 {
    if(num1>num2)
    {
        cout<<"Maximum number:"<< num1;
    }
    else if(num1<num2)
    {
       cout<<"Maximum number:"<< num2; 
    }
    else
    {
        cout<< num1<<" and "<<num2<<" are equal.";
    }

 } 
