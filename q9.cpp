//16. Convert seconds into hours, minutes, and seconds.

#include<iostream>
using namespace std;
int main()
{
    int hour,total_seconds,minute,remaining_seconds,seconds;
    cout<<"Enter total seconds:";
    cin>>total_seconds;
    hour=total_seconds/3600;
    remaining_seconds=total_seconds%3600;
    minute=remaining_seconds/60;
    seconds=remaining_seconds%60;
    cout<<"Hour="<<hour<<endl;
    cout<<"Minutes="<<minute<<endl;
    cout<<"Seconds="<<seconds;
    return 0;
}
