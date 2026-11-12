#include <iostream>
using namespace std;

class base
{
    int data1;
    public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void base :: setdata()
{
    data1=10;
    data2=20;
}

int base :: getdata1()
{
    return data1;
}

int base :: getdata2()
{
    return data2;
}

class derived : public base
{
    int data3;
    public:

    void process()
    {
        data3=data2* getdata1() * getdata2();
    }
    void display()
    {
        cout<<"Data1="<<getdata1()<<endl;
        cout<<"Data2="<<data2<<endl;
        cout<<"Data3="<<data3<<endl;
    }
};

int main()
{
    derived der;
    der.setdata();
    der.process();
    der.display();
    return 0;
}
