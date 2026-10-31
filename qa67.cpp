#include <iostream>
using namespace std;

class MyCalculator
{
public:
    int power(int n, int p)
    {
        if (n == 0 && p == 0)
            throw "n and p should not be zero.";

        if (n < 0 || p < 0)
            throw "n or p should not be negative.";

        int result = 1;

        for (int i = 1; i <= p; i++)
        {
            result = result * n;
        }

        return result;
    }
};

int main()
{
    MyCalculator c;
    int n, p;

    cout << "===== POWER CALCULATOR =====\n";

    cout << "Enter base and exponent (n p): ";

    while (cin >> n >> p)
    {
        try
        {
            cout << "Result: " << c.power(n, p) << endl;
        }
        catch (const char *e)
        {
            cout << "C++Exception: " << e << endl;
        }

        cout << "\nEnter base and exponent (n p): ";
    }

    return 0;
} 
