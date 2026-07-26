
#include <iostream>
using namespace std;

int main()
{
    int number,divisible_count=0;
    cout<<"Enter number:";
    cin>>number;
    for(int i=1;i<=number/2;i++)
    {
       if(number%i==0)
       {
           divisible_count++;
       }
    }
    if(divisible_count==1)
    {
       cout<<number<<" is a prime number."<<endl;
    }
    else
    {
       cout<<number<<" is not a prime number.";
    }
    return 0;
}
