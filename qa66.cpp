
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void removeEvenLength(vector<string> &v)
{
    for (int i = 0; i < v.size(); )
    {
        if (v[i].length() % 2 == 0)
            v.erase(v.begin() + i);
        else
            i++;
    }
}

int main()
{
    vector<string> v;
    int n;
    string s;

    cout << "Enter number of strings: ";
    cin >> n;

    cout << "Enter strings: ";
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    removeEvenLength(v);
    cout << "Strings with odd length: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
