#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character:";
    cin >> ch;
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
        {
            cout << ch << " " << "Character is vowel." << endl;
        }
        else
        {
            cout << ch << " " << "Character is consonant." << endl;
        }
    }

    else
    {
        cout << "Invalid Output";
    }
    return 0;
}
