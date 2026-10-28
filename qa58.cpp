#include <iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    void num(int a1,int b1)
    {
        a=a1;
        b=b1;
    }
    void show()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
    void sum(complex o1,complex o2)
    {
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }
};
int main() {
    complex c1,c2,c3;
    c1.num(1,2);
    c1.show();
    c2.num(3,4);
    c2.show();
    c3.sum(c1,c2);
    c3.show();

    return 0;
}
