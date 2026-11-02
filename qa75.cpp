#include <iostream>
using namespace std;

class Number
{
    int n;

public:
    Number(int x)
    {
        n = x;
    }

    void operator-()
    {
        n = -n;
    }

    void operator++()
    {
        ++n;
    }

    void operator++(int)
    {
        n++;
    }

    void operator--()
    {
        --n;
    }

    void operator--(int)
    {
        n--;
    }

    void display()
    {
        cout << n << endl;
    }
};

int main()
{
    Number n1(10);

    cout << "Original number: ";
    n1.display();

    -n1;
    cout << "After unary -: ";
    n1.display();

    ++n1;
    cout << "After preincrement: ";
    n1.display();

    n1++;
    cout << "After postincrement: ";
    n1.display();

    --n1;
    cout << "After predecrement: ";
    n1.display();

    n1--;
    cout << "After postdecrement: ";
    n1.display();

    return 0;
}
