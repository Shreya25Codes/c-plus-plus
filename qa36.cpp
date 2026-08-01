
#include <iostream>
using namespace std;
#include<string>
struct Address
{
    string city;
    string state;
    int pincode;
};
struct Student
{
    string name;
    int roll;
    char section;
    Address add;
};
int main() {
    int n;
    cout<<"Enter no. of students:";
    cin>>n;
    Student s[n];
    
    for(int i=0;i<n;i++)
    {
    cout<<"Enter name:";
    getline(cin>>ws,s[i].name);
    cout<< "Enter roll:";
    cin>>s[i].roll;
    cout<< "Enter section:";
    cin>>s[i].section;
    cout<< "Enter City:";
    getline(cin>>ws,s[i].add.city);
    cout<< "Enter state:";
    getline(cin>>ws,s[i].add.state);
    cout<< "Enter pincode:";
    cin>>s[i].add.pincode;
    }

    for(int i=0;i<n;i++)
    {
    cout<<"Name:"<<s[i].name<<endl;
    cout<< "Roll:"<<s[i].roll<<endl;
    cout<< "Section:"<<s[i].section<<endl;
    cout<< "City:"<<s[i].add.city<<endl;
    cout<< "State:"<<s[i].add.state<<endl;
    cout<< "Pincode:"<<s[i].add.pincode<<"\n";
    }
    return 0;
}
