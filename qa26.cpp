
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter limit";
    cin>>n;
    int arr[n],temp;
    int* p=arr;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"]:"<<*(p+i)<<endl;
    }
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        temp=*(p+i);
        *(p+i)=*(p+j);
        *(p+j)=temp;
    }
    cout<<"Array after reverse:";
    for(int i=0;i<n;i++)
    {
        cout<<*(p+i)<<" ";
    }
    return 0;
}
