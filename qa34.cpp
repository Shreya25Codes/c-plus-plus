#include <iostream>
using namespace std;
#include<string>
struct Employee
{
    string name;
    int ID;
    float salary_month;
};
int main() {
    int n;
    float annual_salary;
    cout << "Enter no. of Employees";
    cin>>n;
    Employee e[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Name:";
        getline(cin>>ws,e[i].name);
        cout<<"Enter ID:";
        cin>>e[i].ID;
        cout<<"Enter Monthly Salary:";
        cin>>e[i].salary_month;
        annual_salary=e[i].salary_month*12;
        cout<<"Annual Salary of employee "<<i+1<<" is "<<annual_salary<<endl;
    }

    return 0;
}
