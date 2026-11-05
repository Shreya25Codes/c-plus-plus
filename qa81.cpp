#include <iostream>
using namespace std;
class SavingsAccount
{
    static double annualInterestRate;
    float savingsBalance;

public:
    SavingsAccount(float balance)
    {
        savingsBalance = balance;
    }
    void calculateMonthlyInterest()
    {
        savingsBalance = savingsBalance + (savingsBalance * annualInterestRate) / 12;
    }
    static void modifyInterestRate(int rate)
    {
        annualInterestRate = rate/100.0;
    }
    void display()
    {
        cout << "Balance:" << savingsBalance<<endl;
    }

};
double SavingsAccount::annualInterestRate = 0.04;
int main()
{
    SavingsAccount saver1(2000);
    SavingsAccount saver2(3000);

    cout << "\nBalace Before:"<<endl;
    cout << "\nBalance of Saver1:";
    saver1.display();
    cout << "\nBalance of Saver2";
    saver2.display();

    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    cout << "\nBalance at 4% interest:";
    cout << "\nBalance of Saver1";
    saver1.display();
    cout << "\nBalance of Saver2";
    saver2.display();

    SavingsAccount:: modifyInterestRate(5);
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    cout << "\nBalance at 5% interest:";
    cout << "\nBalance of Saver1";
    saver1.display();
    cout << "\nBalance of Saver2";
    saver2.display();

    return 0;
}
