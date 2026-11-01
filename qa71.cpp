#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;

public:
    void getName()
    {
        cout << "Enter name: ";
        cin >> name;
    }

    void displayName()
    {
        cout << "Name: " << name << endl;
    }
};

class Student : virtual public Person
{
protected:
    int rollNo;

public:
    void getRollNo()
    {
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
};

class Researcher : virtual public Person
{
protected:
    string researchTopic;

public:
    void getTopic()
    {
        cout << "Enter research topic: ";
        cin >> researchTopic;
    }
};

class PhDStudent : public Student, public Researcher
{
public:
    void display()
    {
        displayName();
        cout << "Roll number: " << rollNo << endl;
        cout << "Research topic: " << researchTopic << endl;
    }
};

int main()
{
    PhDStudent p;

    p.getName();
    p.getRollNo();
    p.getTopic();

    cout << "\nStudent Details" << endl;
    p.display();

    return 0;
}
