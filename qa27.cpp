#include <iostream>
using namespace std;

int main() {
    int n,even_count=0,odd_count=0;
    cout<<"Enter limit";
    cin>>n;
    int arr[n];
    int* p=arr;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"]:"<<*(p+i)<<endl;
    }
    for(int i=0;i<n;i++)
    {
        if(*(p+i)%2==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    cout<<"Even Numbers in array:"<<even_count<<endl;
    cout<<"Odd Numbers in array:"<<odd_count;
    return 0;
}
