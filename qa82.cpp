#include <iostream>
using namespace std;

class Time
{
    int hours, minutes, seconds;

public:
    Time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    Time(int h , int m , int s )
    {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void display()
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
    void AddTime(Time t1, Time t2)
    {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes;
        hours = t1.hours + t2.hours;
        while(seconds >= 60)
        {
            seconds = seconds - 60;
            minutes++;
        }
        while(minutes >= 60)
        {
            minutes = minutes - 60;
            hours++;
        }
    }
};
int main()
{
    Time t1(2, 66, 88);
    Time t2(2, 64, 8);
    Time t3;
    t3.AddTime(t1, t2);

    cout << "Total time: ";
    t3.display();
    return 0;
}
