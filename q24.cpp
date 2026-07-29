#include <iostream>
using namespace std;

int main() {
    int arr[5]={1,2,3,4,5};
    int sum;
    int* p=arr;//DON'T USE &.
    sum=*p+*(p+1)+*(p+2)+*(p+3)+*(p+4);
    cout<<"Sum:"<<sum;
return 0;
}
