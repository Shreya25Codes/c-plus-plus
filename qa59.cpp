#include <iostream>
using namespace std;
class complex
{
    int real, imag;

public:
    void getdata(int a, int b)
    {
        real = a;
        imag = b;
    }
    void showdata()
    {
        cout << real << "+" << imag << "i" << endl;
    }
    friend complex sum(complex o1, complex o2);
};

complex sum(complex o1, complex o2)
{
    complex o3;
    o3.getdata((o1.real + o2.real), (o1.imag + o2.imag));
    o3.showdata();
    return o3;
}
int main()
{
    complex o1, o2, o3;
    o1.getdata(2, 3);
    o2.getdata(5, 6);
    o1.showdata();
    o2.showdata();
    o3 = sum(o1, o2);
    return 0;
} */


/* lecture 27
#include <iostream>
using namespace std;
class complex;//forward
class calculator
{
public:
    int sumReal(complex, complex);
};

class complex
{
    int a,b;
    friend int calculator::sumReal(complex, complex);

public:
    void getdata(int real, int imag)
    {
        a=real;
        b=imag;
    }
    void showdata()
    {
        cout <<a << "+" <<b<< "i" << endl;
    }
};

int calculator::sumReal(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int main()
{
    complex o1, o2;
    o1.getdata(1, 4);
    o2.getdata(5, 7);
    calculator calc;
    int res = calc.sumReal(o1, o2);
    cout << "Real part of o1 and o2 is " << res;
    return 0;
} 
