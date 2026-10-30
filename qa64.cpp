
#include <iostream>
#include <string>
using namespace std;

class StringDemo
{
    string str;

public:
    StringDemo(string s)
    {
        str = s;
    }

    friend bool operator==(StringDemo s1, StringDemo s2);
};

bool operator==(StringDemo s1, StringDemo s2)
{
    return s1.str == s2.str;
}

int main()
{
    StringDemo s1("Hello");
    StringDemo s2("Hello");
    StringDemo s3("World");

    if (s1 == s2)
        cout << "Strings are equal" << endl;
    else
        cout << "Strings are not equal" << endl;

    if (s1 == s3)
        cout << "Strings are equal" << endl;
    else
        cout << "Strings are not equal" << endl;

    return 0;
}
