
#include <iostream>
using namespace std;

int main()
{
    int a, b, sum;
    int *p1 = &a;
    int *p2 = &b;

    cout << "Enter 1st number:";
    cin >> a;
    cout << "Enter 2nd number:";
    cin >> b;
    sum = *p1 + *p2;
    cout << "Sum:" << sum; //*p1+*p2

    return 0;
}
