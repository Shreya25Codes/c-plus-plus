#include <iostream>
using namespace std;
class employee
{
    int id, salary;

public:
    void setdata()
    {
        cout << "Enter id:";
        cin >> id;
        cout << "Enter salary:";
        cin >> salary;
    }
    void getdata()
    {
        cout << "ID:" << id << endl;
        cout << "Salary:" << salary << endl;
    }
};
int main()
{
    employee google[100];
    for(int i=0;i<5;i++)
    {
        google[i].setdata();
        google[i].getdata();
    }
    return 0;
}
