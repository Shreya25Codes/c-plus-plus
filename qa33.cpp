#include <iostream>
#include <string>
using namespace std;
struct student//stucture declaration
{
    string name;
    int marks;
};

int main() {
    int n,max;
    cout<<"Enter no. of students:";
    cin>>n;
    student s[n];//structure definition
    for(int i=0;i<n;i++)
    {
        cout<<"Enter name:";
        getline (cin >>ws,s[i].name);
        cout<<"Enter marks:";
        cin>>s[i].marks;
    }
    max=s[0].marks;
    for(int i=1;i<n;i++)
    {
        if(s[i].marks>max)
        {
            max=s[i].marks;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(s[i].marks==max)
        {
            cout<<"student having highest marks:"<<s[i].name<<endl;
        }
    }
    cout<<"Highest Marks:"<<max;
    return 0;
} 
