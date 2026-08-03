#include <iostream>
using namespace std;
int main()
{
    float cost, final_price, discount;
    cout << "Enter cost of purchase";
    cin >> cost;

    if (cost <= 2000)
    {
        discount = cost * 0.05;
        final_price = cost - discount;
    }
    else if (cost > 2000 && cost <=5000)
    {
        discount = cost * 0.25;
        final_price = cost - discount;
    }
    else if (cost > 5000 && cost<=10000)

    {
        discount = cost * 0.35;
        final_price = cost - discount;
    }

    else if (cost > 10000)
    {
        discount = cost * 0.5;
        final_price=cost - discount;
    }
    cout << "\n Final Price:" << final_price;
    return 0;
}
