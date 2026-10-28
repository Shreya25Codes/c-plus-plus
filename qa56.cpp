#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count; //static data member by default initializes with 0
public:
    void setdata()
    {
        cout << "Enter id:";
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout<<"Id of employee no.:"<<count<<" is "<<id<<endl;
    }
    static void getcount()//static function
    {
        cout<<"Count:"<<count<<endl;
    }
};

int employee::count=1000;//not with each object

int main()
{
    employee shreya, tanu;
    shreya.setdata();
    shreya.getdata();
    employee::getcount();

    tanu.setdata();
    tanu.getdata();
    employee::getcount();

    return 0;
}
