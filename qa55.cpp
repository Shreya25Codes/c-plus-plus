#include <iostream>
using namespace std;
class shop
{
    int id[50]; // private data members
    float price[50];
    int c;
public:
    void counter()
    {
        c = 0;
    }
    void setPrice();
    void show();
};

void shop::setPrice()
{
    for(int i=0;i<5;i++)
    {
    cout << "Enter id" << "[" << c + i << "]:";
    cin >> id[c + i];
    cout << "Enter price" << "[" << c + i << "]:";
    cin >> price[c + i];
    }
}
void shop::show()
{
    for(int i=0;i<5;i++)
    {
    cout << "ID[" << c + i << "]=" << id[c + i] << endl;
    cout << "Price[" << c + i << "]=" << price[c + i] << endl;
    }
}
int main()
{
    shop s;
    s.counter();
    s.setPrice();
    s.show();

    return 0;
} 
