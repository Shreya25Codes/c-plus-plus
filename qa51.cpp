#include <iostream>
#include<string>
using namespace std;
class Student
{
    string name;
    int id;
    int roll;

    public: void getdata()
            {
                cout<<"Enter name:";
                getline(cin,name);
                cout<<"Enter id:";
                cin>>id;
                cout<<"Enter roll:";
                cin>>roll;
            }
            void display()
            {
            cout<<"Name:"<<name<<endl;
            cout<<"ID:"<<id<<endl;
            cout<<"Roll no.:"<<roll<<endl;
            }
};

int main()
{
    Student s;
    s.getdata();
    s.display();
    return 0;
}
