#include<iostream>
using namespace std;
int main()
{
    // IMPLICIT CONVERSION
    int i=10;
    float f=25.54;
    char ch='s';
    cout<<"sum="<<i+f; 

    //EXPLICIT CONVERSION
     int i=10,ascii;
    float f=25.54,sum;
    char ch='s';
    sum=i+f;
    cout<<"sum="<<sum<<endl;
    ascii=int(ch);
    cout<<"ASCII:"<<ascii; 
    
    return 0;
}
