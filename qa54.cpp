#include <iostream>
#include <string>
using namespace std;
class binary
{
public:
    string s;
    void input();
    void check();
    void compliment(void);
    void display();
};
void binary::input()
{
    cout << "Enter a string:";
    getline(cin, s);
}
void binary::check()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary.";
            return;
        }
    }
    cout << "Binary";
}

void binary::compliment(void)
{
    check();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0' )
        {
            s.at(i)='1';
        }
        else if(s.at(i) == '1' )
        {
            s.at(i)='0';
        }
    }
}

void binary::display()
            {
                cout<<"\nUpdated Binary:"<<s;
            }

int main()
{
    binary num;
    num.input();

    num.compliment();
    num.display();
    return 0;
} 
