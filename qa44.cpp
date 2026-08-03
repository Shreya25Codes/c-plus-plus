
#include <iostream>
using namespace std;
void tax(int, char, float);
int main()
{
    char gender;
    int age, income;
    cout << "Enter Gender(M/F):";
    cin >> gender;
    cout << "Enter Age:";
    cin >> age;
    cout << "Enter income:";
    cin >> income;
    tax(age, gender, income);
    return 0;
}

void tax(int age, char gender, float income)
{
    float tax;
    if (age > 65 || (gender == 'F' || gender == 'f'))
    {
        cout << "\nWrong Category";
    }
    else if (age <= 65 && (gender == 'M' || gender == 'm'))
    {
        if (income <= 160000)
        {
            tax = 0;
            cout << "\n Tax:nil";
        }
        else if (income > 160000 && income <= 500000)
        {
            tax = (income - 160000) * 0.1;
            cout << "Tax:" << tax << endl;
        }
        else if (income > 500000 && income <= 800000)
        {
            tax = ((income - 500000) * 0.2) + 34000;
            cout << "Tax:" << tax << endl;
        }
        else if (income > 800000)
        {
            tax = ((income - 800000) * 0.3) + 94000;
            cout << "Tax:" << tax << endl;
        }
    }
} 
