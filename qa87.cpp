#include <iostream>
using namespace std;

class student
{
    int roll;

public:
    void setdata1(int r);
    void getdata1();
};

void student ::setdata1(int r)
{
    roll = r;
}
void student ::getdata1()
{
    cout<<"Roll no.:"<<roll<<endl;
}

class exam : public student
{
    public:
    int marks1, marks2;
    void setdata2(int m1,int m2);
    void getdata2();
};
void exam ::setdata2(int m1,int m2)
{
    marks1 = m1;
    marks2 = m2;
}

void exam ::getdata2()
{
    cout<<"Marks1:"<<marks1<<endl;
    cout<<"Marks2:"<<marks2<<endl;
}

class result : public exam
{
    float perc;
    public:
    void getdata3();
};

void result ::getdata3()
{
    perc=(marks1+marks2)/2;
    cout<<"Percentage:"<<perc<<endl;
}

int main()
{
    result shreya;
    shreya.setdata1(32);
    shreya.setdata2(99,92);
    shreya.getdata3();
    return 0;
}
