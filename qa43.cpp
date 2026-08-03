
 #include <iostream>
 using namespace std;
 void fibbonaci(int max);
 int main() 
 {
    int max;
    cout<<"Enter max value in series:";
    cin>>max;
    fibbonaci(max);
    return 0;
 }

 void fibbonaci(int max)
 {
    int a=0,b=1,c;
    cout<<a<<"\t";
    cout<<b<<"\t";
    c=a+b;
    while(c<=max)
    {
        cout<<c<<"\t";
        a=b;
        b=c;
        c=a+b;
    }
 } 
