#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character:";
    cin>>ch;
    if(ch>=65 && ch<=90)
    {
    //toggle to lowercase
    cout<<"Character :"<<char( ch +32);
    }
    else if(ch>=97 && ch<=122)
    {
    //toggle to uppercase
    cout<<"Character :"<< char(ch-32);
    }
    else
    {
     cout<<"Invalid input";
    }
    return 0;
}
