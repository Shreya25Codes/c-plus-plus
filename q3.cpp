#include<iostream>
using namespace std;
int main()
{
    int num1,num2,temp;
    cout<<"Enter 1st number:";
    cin>>num1;
    cout<<"Enter 2nd number:";
    cin>>num2;
    cout<<"Number before swapping:"<<num1<<" " <<num2<<endl;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"Number after swapping:"<<num1 <<" "<<num2<<endl;
    return 0;
} 
