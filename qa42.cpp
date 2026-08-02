 #include <iostream>
 using namespace std;
 void factorial(int num);
 int main() {
     int num;
     cout<<"Enter a number:";
     cin>>num;
     factorial(num);
     return 0;
 }
 void factorial(int num)
 {
    int fact=1;
    for(int i=1;i<=num;i++)
    {
        fact=i*fact;
    }
    cout<<"Factorial of "<<num<<" is "<<fact;
 } 
