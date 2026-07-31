#include <iostream>
using namespace std;
struct student
{
    string name;
    int roll;
    char sec;
    int marks;
};
    int main() {
    int n;
    cout<<"Enter no. of students:";
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++)
    {
    cout<<"Enter Name:";
    getline(cin>>ws, s[i].name);
    cout<<"Enter Roll no.:";
    cin>>s[i].roll;
    cout<<"Enter Section:";
    cin>>s[i].sec;
    cout<<"Enter Marks:";
    cin>>s[i].marks;
    }

    for(int i=0;i<n;i++)
    {
    cout<<"Name:"<<s[i].name<<endl;
    cout<<"Roll no.:"<<s[i].roll<<endl;
    cout<<"Section:"<<s[i].sec<<endl;
    cout<<"Marks:"<<s[i].marks<<endl;
    }
    return 0;
}
