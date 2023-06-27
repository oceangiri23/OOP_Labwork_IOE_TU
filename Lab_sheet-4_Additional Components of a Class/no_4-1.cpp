/*
    Lab 4
    Additional Components of a Class
    1.  Write a program that has a class to represent time. The class should have constructors to initialize data members
        hour, minute, and second to 0 and to initialize them to values passed as arguments. The class should have a member function
        to add time objects and return the result as a time object. There should be functions to display time in 12-hour and 24-hour format.
*/

#include <iostream>
#include <iomanip>
using namespace std;

class Time
{
private:
    int _hr, _minute, _sec;

public:
    Time(int h = 0, int m = 0, int s = 0) : _hr{h}, _minute{m}, _sec{s} {}

    // Add two time objects
    Time addTime(const Time &t)
    {
        Time temp;
        temp._hr = _hr + t._hr;
        temp._minute = _minute + t._minute;
        temp._sec = _sec + t._sec;

        temp._minute += temp._sec / 60;
        temp._sec %= 60;

        temp._hr += temp._minute / 60;
        temp._minute %= 60;

        return temp;
    }

    void twelveHrFormat()
    {
        cout << "Time in 12-hour format: "
             << setfill('0') << setw(2) << (_hr > 12 ? _hr - 12 : _hr) << ":"
             << setfill('0') << setw(2) << _minute << ":"
             << setfill('0') << setw(2) << _sec << " PM" << '\n';
    }

    void twentyHrFormat()
    {
        cout << "Time in 24-hour format: "
             << setfill('0') << setw(2) << (_hr > 24 ? _hr - 24 : _hr) << ":"
             << setfill('0') << setw(2) << _minute << ":"
             << setfill('0') << setw(2) << _sec << '\n';
    }
};

int main()
{
    Time t1(12, 59, 58);
    Time t2(12, 5, 6);

    Time t3 = t1.addTime(t2);

    t3.twelveHrFormat();
    t3.twentyHrFormat();

    return 0;
}