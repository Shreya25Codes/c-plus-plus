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
    friend int add(X,Y);
};
class Y
{
    int val2;
    public:
    void setdata(int n2)
    {
        val2=n2;
    }
    friend int add(X,Y);
};

int add(X o1 , Y o2 )
{
    return (o1.val1+o2.val2);
}

int main() {
    X o1;
    Y o2;
    o1.setdata(3); 
    o2.setdata(5); 
    cout<<"sum="<<add(o1,o2);
    return 0;
} 
