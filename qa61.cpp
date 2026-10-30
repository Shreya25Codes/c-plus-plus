
#include <iostream>
using namespace std;
class Y;//friend declaration
class X
{
    int val1;
    public:
    void setdata(int n1)
    {
        val1=n1;
    }
    void showdata()
    {
        cout<<"\nval1="<<val1;
    }
    friend void swap(X&,Y&);
};
class Y
{
    int val2;
    public:
    void setdata(int n2)
    {
        val2=n2;
    }
    void showdata()
    {
        cout<<"\nval2="<<val2;
    }
    friend void swap(X&,Y&);
};

void swap(X & o1,Y &o2)
{
    int temp;
    temp=o1.val1;
    o1.val1=o2.val2;
    o2.val2=temp;
}

int main() {
    X o1;
    Y o2;
    o1.setdata(25);
    o2.setdata(12);
    o1.showdata();
    o2.showdata();
    cout<<"\nAfter Swap:";
    swap(o1,o2);
    o1.showdata();
    o2.showdata();
    return 0;
}
