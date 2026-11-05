#include <iostream>
#include <string>
using namespace std;
class tollbooth
{
    int cars;
    double money;

public:
    tollbooth()
    {
        cars = 0;
        money = 0;
    }
    void payingCar()
    {
        cars++;
        money = money + 0.5;
    }
    void NonPayCar()
    {
        cars++;
    }
    void display()
    {
        cout << "Total Cars:" << cars << endl;
        cout << "Total Cash:" << money << endl;
    }
};
int main()
{
    tollbooth t;
    char ch;

    do
    {
    cout << "Enter P or p for paying cars\n";
    cout << "Enter N or n for non paying cars\n";
    cout << "Enter E or e for exit\n";
    cout << "Enter your choice:";
    cin >> ch;
        if (ch == 'P' || ch == 'p')
        {
            t.payingCar();
        }
        else if (ch == 'N' || ch == 'n')
        {
            t.NonPayCar();
        }
        else
        {
            cout << "Invalid Choice";
        }
    } while (ch != 'E' && ch != 'e');
    t.display();
    return 0;
}
