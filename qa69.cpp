#include <iostream>
using namespace std;
class CAL_AREA
{
protected:
    float r, h;
public:
    void getdata()
    {
        cout << "Enter radius: ";
        cin >> r;
        cout << "Enter height: ";
        cin >> h;
    }

    virtual void display_volume() = 0;
};

class cone : public CAL_AREA
{
public:
    void display_volume()
    {
        cout << "Volume of cone = " << (3.14 * r * r * h) / 3 << endl;
    }
};

class hemisphere : public CAL_AREA
{
public:
    void display_volume()
    {
        cout << "Volume of hemisphere = " << (2.0 * 3.14 * r * r * r) / 3 << endl;
    }
};

class cylinder : public CAL_AREA
{
public:
    void display_volume()
    {
        cout << "Volume of cylinder = " << 3.14 * r * r * h << endl;
    }
};

int main()
{
    cone c;
    hemisphere hm;
    cylinder cy;
    int choice;

    cout << "1. Cone" << endl;
    cout << "2. Hemisphere" << endl;
    cout << "3. Cylinder" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        c.getdata();
        c.display_volume();
    }
    else if (choice == 2)
    {
        hm.getdata();
        cout << "Height is not required for hemisphere." << endl;
        hm.display_volume();
    }
    else if (choice == 3)
    {
        cy.getdata();
        cy.display_volume();
    }
    else
    {
        cout << "Invalid choice" << endl;
    }

    return 0;
}
