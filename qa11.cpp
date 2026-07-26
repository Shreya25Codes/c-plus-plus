
#include <iostream>
using namespace std;

int main()
{
    int reverse_number=0,temp,number,digit;
    cout<<"Enter a number:";
    cin>>number;
    temp=number;
    while(temp>0)
    {
        digit=temp%10;
        reverse_number=reverse_number*10+digit;
        temp=temp/10;
    }
    cout<<"Reverse Number: "<<reverse_number<<endl;
    if(number==reverse_number)
    {
        cout<<number<<" is a Palindrome number"<<endl;
    }
    else
    {
        cout<<number<<" is not a Palindrome number"<<endl;
    }
    return 0;
}
