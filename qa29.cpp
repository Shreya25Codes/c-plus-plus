#include <iostream>
    using namespace std;

int main()
{
    int n;
    cout << "Enter limit of 1st array";
    cin >> n;
    int arr1[n];
    int *p1 = arr1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Array:";
    for (int i = 0; i < n; i++)
    {
        cout << *(p1 + i) << " ";
    }
    cout << "\n"
         << "Reverse Array:";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << *(p1 + i) << " ";
    }

    return 0;
}
