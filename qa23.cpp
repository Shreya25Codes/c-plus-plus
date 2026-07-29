#include <iostream>
using namespace std;

int main() {
    int arr[5]={1,2,3,4,5};
    int* p=arr;//DON'T USE &.
    cout<<"p[0]:"<<*p<<endl;
    cout<<"p[1]:"<<*(p+1)<<endl;
    cout<<"p[2]:"<<*(p+2)<<endl;
    cout<<"p[3]:"<<*(p+3)<<endl;
    cout<<"p[4]:"<<*(p+4)<<endl;
    return 0;
}
