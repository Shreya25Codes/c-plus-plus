
 #include <iostream>
 #include<cmath>
 using namespace std;
 void armstrong(int num);
 int main() {
     int num;
     cout<<"Enter a number:";
     cin>>num;
     armstrong(num);
     return 0;
 }

 void armstrong(int num)
 {
    int temp,digit,sum=0,count=0;
    temp=num;
    while(temp>0)
    {
        digit=temp%10;
        temp=temp/10;
        count++;
    }
    cout<<"Digit:"<<count<<endl;
    temp=num;
    while(temp>0)
    {
        digit=temp%10;
        temp=temp/10;
        sum=sum+pow(digit,count);
    }
    cout<<"Sum:"<<sum;

    if(sum==num)
    {
        cout<<num<<" is a armstrong number.";
    }
    else
    cout<<num<<" is not a armstrong number.";
 }
