
#include <iostream>
 using namespace std;

 int main() {
    int n,max=0;

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
        cout<<"arr[i]:"<<*(p+i)<<endl;
    }
    max=*p;
    for(int i=1;i<n;i++)
    {
        if(max<*(p+i))
        {
            max=*(p+i);
        }
    }
     cout<<"Largest Number:"<<max;
return 0;
} 
