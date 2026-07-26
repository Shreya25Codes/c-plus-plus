
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int digit,dig,number,count=0,sum_of_digits=0,temp;
    cout<<"Enter number:";
    cin>>number;
    temp=number;
    while(temp>0)
    {
       digit=temp%10;
       temp=temp/10;
       count++;
    }
    cout<<"Count:"<<count<<endl;
    temp=number;
    while(temp>0)
    {
       dig=temp%10;
       sum_of_digits=pow(dig,count)+sum_of_digits;
       temp=temp/10;
    }
   cout<<sum_of_digits<<" is sum of digits"<<endl;
    if(sum_of_digits==number)
    {
       cout<<number<<" is an armstrong number"<<endl;
    }
    else
    {
       cout<<number<<" is not an armstrong number"<<endl;
    }
    return 0;
}
