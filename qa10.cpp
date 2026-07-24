
#include <iostream>
using namespace std;

int main()
{
    int n,factorial=1,sum=0;
    cout<<"Enter the value of n:";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
        factorial=factorial*i;
    }
    cout<<"Sum:"<<sum<<endl;
    cout<<"Factorial:"<<factorial;
    return 0;
}
