#include <iostream>
 using namespace std;
 void prime(int num);
 int main() {
     int num;
     cout<<"Enter a number:";
     cin>>num;
     prime(num);
     return 0;
 }

 void prime(int num)
 {
    int found=0;
    for(int i=2;i<=num/2;i++)
    {
    if(num%i==0)
    {
        found=1;
    }
    }

    if(found==0)
    {
        cout<<num<<" is a prime number.";
    }
    else
    {
        cout<<num<<" is not a prime number.";
    }
}
