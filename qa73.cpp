#include <iostream>
using namespace std;
class Base
{
private:
   int a = 10;

protected:
   int b = 20;

public:
   int c = 30;

   void display()
   {
       cout << "Private member: " << a << endl;
       cout << "Protected member: " << b << endl;
       cout << "Public member: " << c << endl;
   }
};

class Derived1 : public Base
{
public:
   void show()
   {
       // cout << a;  // Not accessible
       cout << "Public inheritance: " << c << endl;
       cout << "Protected member: " << b << endl;
   }
};

class Derived2 : protected Base
{
public:
   void show()
   {
       cout << "Protected inheritance: " << c << endl;
       cout << "Protected member: " << b << endl;
   }
};

class Derived3 : private Base
{
public:
   void show()
   {
       cout << "Private inheritance: " << c << endl;
       cout << "Protected member: " << b << endl;
   }
};

int main()
{
   Base b1;
   Derived1 d1;
   Derived2 d2;
   Derived3 d3;

   b1.display();
   d1.show();
   d1.c = 50;
   d2.show();
   d3.show();

   return 0;
}
