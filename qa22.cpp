
#include <iostream>
using namespace std;

int main() {
   int num,after_num;
   int* p=&num;
   cout << "Enter number:";
   cin >> num;
   cout << "Enter number after update:";
   cin >> after_num;

   *p=after_num;

   cout<<"Number after update:"<<num;
    return 0;
}
