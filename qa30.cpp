
#include <iostream>
using namespace std;

int main()
{
    int n,element,found=0;
    cout << "Enter limit of  array";
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
    cout<<"\n"<<"Enter element to find";
    cin>>element;

    for(int i=0;i<n;i++)
    {
        if(*(p1+i)==element)
        {
            found=1;
        }
    }
    if(found==1)
    {
        cout<<"Element found";
    }
    else
    {
        cout<<"Element not found";
    }
return 0;
} 
