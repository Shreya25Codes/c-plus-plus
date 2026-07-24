#include <iostream>
using namespace std;

int main()
{
    int i,number,table;
    for(i=1;i<=20;i++)
    {
        cout<<i<<endl;
    }
    cout<<"Reverse order:"<<endl;
    for(i=20;i>=1;i--)
    {
       cout<<i<<endl;
    }
    cout<<"Even Numbers:"<<endl;

    for(i=1;i<=100;i++)
    {
     if(i%2==0)
     {
       cout<<i<<endl;
     }
    }
    cout<<"Odd Numbers:"<<endl;

    for(i=1;i<=100;i++)
    {
     if(i%2!=0)

    {
        cout<<i<<endl;
     }

    }

    cout<<"Enter a number:";
    cin>>number;

    for(i=1;i<=10;i++)
    {   table=number*i;
        cout<<table<<endl;
    }
    return 0;
}
