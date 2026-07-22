//15. Calculate total marks and percentage of 5 subjects.
#include<iostream>
using namespace std;
int main()
{
    int marks1,marks2,marks3,marks4,marks5;
    float percentage;
    cout<<"Enter marks of 1st subject";
    cin>>marks1;
    cout<<"Enter marks of 2nd subject";
    cin>>marks2;
    cout<<"Enter marks of 3rd subject";
    cin>>marks3;
    cout<<"Enter marks of 4th subject";
    cin>>marks4;
    cout<<"Enter marks of 5th subject";
    cin>>marks5;
    percentage=(marks1+marks2+marks3+marks4+marks5)/5;
    cout<<"Percentage="<<percentage;
    return 0;
} 
