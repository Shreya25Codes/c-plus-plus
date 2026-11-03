#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class StringOperation;
class Listone
{
    string names;
public:
    Listone(string s)
    {
        names = s;
    }
    friend class StringOperation;
};

class Listtwo
{
    string names;
public:
    Listtwo(string s)
    {
        names = s;
    }
    friend class StringOperation;
};
class StringOperation
{
public:
    void findMaximum(Listone l1, Listtwo l2)
    {
        string name[100];
        int freq[100] = {0};
        int n = 0;
        string word;
        stringstream ss(l1.names + " " + l2.names);
        while (ss >> word)
        {
            int i;
            for (i = 0; i < n; i++)
            {
                if (name[i] == word)
                {
                    freq[i]++;
                    break;
                }
            }
            if (i == n)
            {
                name[n] = word;
                freq[n] = 1;
                n++;
            }
        }
        int max = 0;
        for (int i = 1; i < n; i++)
        {
            if (freq[i] > freq[max])
                max = i;
        }
        if (n > 0)
        {
            cout << "Name occurring maximum times: "
                 << name[max] << endl;
            cout << "Frequency: " << freq[max] << endl;
        }
    }
};
int main()
{
    Listone l1("Aman Riya Aman Rahul");
    Listtwo l2("Riya Aman Rahul Aman");
    StringOperation obj;
    obj.findMaximum(l1, l2);
    return 0;
}
