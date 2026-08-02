
 #include <iostream>
 using namespace std;
 void palindrome(int num);
 int main() {
     int num;
     cout<<"Enter a number:";
     cin>>num;
     palindrome(num);
     return 0;
 }

 void palindrome(int num)
 {
    int temp=num,digit,number=0;
    while(temp>0)
    {
        digit=temp%10;
        temp=temp/10;
        number=digit+number*10;
    }
    
    if(number==num)
    {
        cout<<num<<" is a palindrome number.";
    }
    else
    {
        cout<<num<<" is not a palindrome number.";
    }
 }
