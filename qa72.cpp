#include <iostream>
using namespace std;

class Student
{
    int age, enroll_no;
    string name;
    float marks;

public:
    void getStudent()
    {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter enrollment number: ";
        cin >> enroll_no;

        cout << "Enter marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nStudent Information\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Enrollment Number: " << enroll_no << endl;
        cout << "Marks: " << marks << endl;
    }
};

class Faculty
{
    string facultyName, facultyCode, deptt, gender;
    float salary;
    int age, experience;

public:
    void getFaculty()
    {
        cout << "\nEnter faculty name: ";
        cin >> facultyName;

        cout << "Enter faculty code: ";
        cin >> facultyCode;

        cout << "Enter salary: ";
        cin >> salary;

        cout << "Enter department: ";
        cin >> deptt;

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter experience: ";
        cin >> experience;

        cout << "Enter gender: ";
        cin >> gender;
    }

    void display()
    {
        cout << "\nFaculty Information\n";
        cout << "Name: " << facultyName << endl;
        cout << "Code: " << facultyCode << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << deptt << endl;
        cout << "Age: " << age << endl;
        cout << "Experience: " << experience << " years" << endl;
        cout << "Gender: " << gender << endl;
    }
};

class Person : public Student, public Faculty
{
public:
    void display()
    {
        Student::display();
        Faculty::display();
    }
};

int main()
{
    Person p;

    p.getStudent();
    p.getFaculty();

    p.display();

    return 0;
}
