
#include <iostream>
#include<string>
using namespace std;
struct Student 
{
    string name;
    float marks;
    int roll;
};
int main() {
    Student s;
    cout<<"Enter Name:";
    getline(cin,s.name);
    cout<<"Enter Marks:";
    cin>>s.marks;
    cout<<"Enter Roll:";
    cin>>s.roll;

    cout<<"Name:"<<s.name<<endl;
    cout<<"Marks:"<<s.marks<<endl;
    cout<<"Roll:"<<s.roll;

    return 0;
}
