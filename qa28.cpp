#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter limit of 1st array";
    cin >> m;
    int arr1[m];
    int *p1 = arr1;
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
    cout<<"1st Array:";
    for (int i = 0; i < m; i++)
    {
        cout << *(p1 + i) << " ";
    }
        int arr2[m];
        int *p2 = arr2;
        for (int i = 0; i < m; i++)
        {
            *(p2 + i) = *(p1 + i);
        }
        cout << "\n"<<"Another Array is:";
        for (int i = 0; i < m; i++)
        {
            cout << *(p2 + i)<<" ";
        }

    return 0;
}
