#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    Complex operator+(Complex c)
    {
        return Complex(real + c.real, imag + c.imag);
    }
    Complex operator-(Complex c)
    {
        return Complex(real - c.real, imag - c.imag);
    }
    Complex operator*(Complex c)
    {
        return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
    }

    Complex operator/(Complex c)
    {
        int d = c.real * c.real + c.imag * c.imag;

        return Complex((real * c.real + imag * c.imag) / d,(imag * c.real - real * c.imag) / d);
    }
    void display()
    {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i" << endl;
        else
            cout << " - " << -imag << "i" << endl;
    }
};

int main()
{
    Complex c1(6, 4), c2(2, 2), c3(0, 0);

    c3 = c1 + c2;
    cout << "Addition: ";
    c3.display();

    c3 = c1 - c2;
    cout << "Subtraction: ";
    c3.display();

    c3 = c1 * c2;
    cout << "Multiplication: ";
    c3.display();

    c3 = c1 / c2;
    cout << "Division: ";
    c3.display();

    return 0;
}
