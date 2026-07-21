#include<iostream>
using namespace std;
int main()
{
    float principal_amount,rate_of_interest,time,simple_interest;
    cout<<"Enter principal amount:";
    cin>>principal_amount;
    cout<<"Enter rate of interest:";
    cin>>rate_of_interest;
    cout<<"Enter time:";
    cin>>time;
    simple_interest=(principal_amount*rate_of_interest*time)/100;
    cout<<"Simple Interest="<<simple_interest;
    return 0;
}
