#include <iostream>
using namespace std;
int sum(int a,int b);
int main()
{
    int a,b;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<"Sum:"<< sum(a,b);
    return 0;
}

int sum(int a, int b)
{  
    return a+b; 
} 
