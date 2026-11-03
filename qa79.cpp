#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Usertwo;
class Userone
{
    string username, password, str1;
public:
    Userone(string u, string p, string s)
    {
        username = u;
        password = p;
        str1 = s;
    }
    friend void compare(Userone, Usertwo);
};

class Usertwo
{
    string username, password, str2;
public:
    Usertwo(string u, string p, string s)
    {
        username = u;
        password = p;
        str2 = s;
    }
    friend void compare(Userone, Usertwo);
};

void compare(Userone a, Usertwo b)
{
    if (a.username == b.username &&
        a.password == b.password)
    {
        string result = a.str1 + b.str2;
        sort(result.begin(), result.end());

        cout << "Merged sorted string: "
             << result << endl;
    }
    else
    {
        string s1 = "", s2 = "";
        for (int i = 0; i < a.str1.length(); i++)
        {
            if (s1.find(a.str1[i]) == string::npos)
                s1 += a.str1[i];
        }
        for (int i = 0; i < b.str2.length(); i++)
        {
            if (s2.find(b.str2[i]) == string::npos)
                s2 += b.str2[i];
        }
        cout << "String 1 without duplicates: "
             << s1 << endl;
        cout << "String 2 without duplicates: "
             << s2 << endl;
    }
}

int main()
{
    Userone U1("user", "123", "banana");
    Usertwo U2("user", "123", "apple");
    compare(U1, U2);
    Userone U3("abc", "111", "banana");
    Usertwo U4("xyz", "222", "apple");
    compare(U3, U4);
    return 0;
}
