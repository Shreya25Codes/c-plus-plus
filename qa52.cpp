#include<iostream>
#include<string>
using namespace std;
class employee
{
    string name;
    int id;
    float salary;

    public:void getdata()
           {
            cout<<"Enter Name:";
            cin>>name;
            cout<<"Enter id:";
            cin>>id;
            cout<<"Enter Salary:";
            cin>>salary;
           }

           void showdata()
           {
            cout<<"Name:"<<name<<endl;
            cout<<"Enter id:"<<id<<endl;
            cout<<"Enter Salary:"<<salary<<endl;
           }
}e;
int main()
{
    employee e;
    e.getdata();
    e.showdata();
    return 0;
} 
