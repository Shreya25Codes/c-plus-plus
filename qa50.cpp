#include <iostream>
int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 2 * i - 1; j >= 1; j = j - 2)
        {
            cout<< j;
        }
        cout<<"\n";
    }
    return 0;
}
