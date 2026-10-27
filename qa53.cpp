 #include <iostream>
 using namespace std;
 class student
 {
    private : int a, b;
    public : int c , d;
    void setdata(int a1, int b1 )
    {
        a=a1;
        b=b1;
    }
    void show();
 };
 void student:: show()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
        cout<<"c="<<c<<endl;
        cout<<"d="<<d<<endl;
    }
 int main() {
    student shreya;
    shreya.setdata(99,100);
    shreya.c=95;
    shreya.d=94;
    shreya.show();
     return 0;
 }
