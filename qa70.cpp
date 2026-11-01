#include <iostream>
using namespace std;
class Shape
{
protected:
    double x, y;

public:
    void get_data()
    {
        cout << "Enter two values: ";
        cin >> x >> y;
    }

    virtual void display_area()
    {
        cout << "Area of shape";
    }
};

class Triangle : public Shape
{
public:
    void display_area()
    {
        cout << "Area of triangle = " << 0.5 * x * y << endl;
    }
};

class Rectangle : public Shape
{
public:
    void display_area()
    {
        cout << "Area of rectangle = " << x * y << endl;
    }
};

int main()
{
    Triangle t;
    Rectangle r;
    int choice;

    cout << "1. Triangle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        t.get_data();
        t.display_area();
    }
    else if (choice == 2)
    {
        r.get_data();
        r.display_area();
    }
    else
    {
        cout << "Invalid choice" << endl;
    }

    return 0;
}
