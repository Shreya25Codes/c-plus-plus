#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ifstream file("myfile.txt");
    string word, rev;
    int count = 0;
    while (file >> word)
    {
        rev = "";
        for (int i = word.length() - 1; i >= 0; i--)
        {
            rev = rev + word[i];
        }
        if (word == rev)
        {
            count++;
        }
    }
    file.close();
    cout << "Number of palindromes = " << count;
    return 0;
}
