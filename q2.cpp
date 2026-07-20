
#include<iostream>
using namespace std;
int main()
{
    int length,width,area_rectangle,perimeter_rectangle,side,area_square,radius;float circumference_circle;

    cout<<"Enter length of rectangle:";
    cin>>length;
    cout<<"Enter width of rectangle:";
    cin>>width;
    area_rectangle=length*width;
    perimeter_rectangle=2*(length+width);

    cout<<"Enter side:";
    cin>>side;
    area_square=side*side;

    cout<<"Enter radius of circle:";
    cin>>radius;
    circumference_circle=2*3.14*radius;

    cout<<"Area of rectangle="<<area_rectangle<<endl    ;
    cout<<"Perimeter of rectangle="<<perimeter_rectangle<<endl;
    cout<<"Area of square="<<area_square<<endl;
    cout<<"Circumference of circle="<<circumference_circle<<endl;

    return 0;
}
