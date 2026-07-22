#include<iostream>
using namespace std;
int main()
{
    int years,total_days,months,days,remaining_days;
    cout<<"Enter total no. of days:";
    cin>>total_days;
    years=total_days/365;
    remaining_days=total_days%365;
    months=remaining_days/30;
    days=remaining_days%30;
    cout<<"Years:"<<years<<endl;
    cout<<"Months="<<months<<endl;
    cout<<"Days="<<days;
    return 0;
}  
