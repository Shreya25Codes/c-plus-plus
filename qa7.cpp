#include <iostream>
using namespace std;
int main()
{
    int number1, number2, choice;
    float addition, multiplication, division, subtraction;

    cout << "Enter 1st number:" << endl;
    cin >> number1;
    cout << "Enter 2nd number:" << endl;
    cin >> number2;

    cout << "Enter your choice" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "ADDITION" << endl;
        addition = number1 + number2;
        cout << "Addition:" << addition << endl;
        break;

    case 2:
        cout << "SUBTRACTION" << endl;
        subtraction = number1 - number2;
        cout << "Subtraction:" << subtraction << endl;
        break;

    case 3:
        cout << "MULTIPLICATION" << endl;
        multiplication = number1 * number2;
        cout << "Multiplication:" << multiplication << endl;
        break;

    case 4:
        cout << "DIVISION" << endl;
        division = (float)number1 / number2;
        cout << "Division:" << division << endl;
        break;
    default:
    {
        cout << "Invalid Input";
    }
    }

    return 0;
}
