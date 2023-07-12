/*Write a class for instantiating the objects that represent the two-dimensional Cartesian coordinate system.

A. Make a particular member function of one class as a friend function of another class for addition.

B. Make the other three functions to work as a bridge between the classes for multiplication, division, and subtraction.

C. Also write a small program to demonstrate that all the member functions of one class are the friend functions of another class if the former class is made friend to the latter.

Make least possible classes to demonstrate all the above in a single program without conflict.*/
#include <iostream>
using namespace std;

class coordinate
{
private:
    int x;
    int y;

public:
    coordinate(int a, int b) : x{a}, y{b} {}

    friend coordinate operator+(const coordinate &c1, const coordinate &c2);
    friend coordinate operator-(const coordinate &c1, const coordinate &c2);
    friend coordinate operator*(const coordinate &c1, const coordinate &c2);
    friend coordinate operator/(const coordinate &c1, const coordinate &c2);
};

coordinate operator+(const coordinate &c1, const coordinate &c2)
{
    cout << "The sum be (" << (c1.x + c2.x) << "," << (c1.y + c2.y) << ")" << endl;
}
coordinate operator-(const coordinate &c1, const coordinate &c2)
{
    cout << "The difference be (" << (c1.x - c2.x) << "," << (c1.y - c2.y) << ")" << endl;
}
coordinate operator*(const coordinate &c1, const coordinate &c2)
{
    cout << "The product be (" << (c1.x * c2.x) << "," << (c1.y * c2.y) << ")" << endl;
}
coordinate operator/(const coordinate &c1, const coordinate &c2)
{
    cout << "The difference be (" << (c1.x / c2.x) << "," << (c1.y / c2.y) << ")";
}

int main()
{

    coordinate c1(12, 10);
    coordinate c2(4, 2);

    coordinate c3 = c1 + c2;
    coordinate c4 = c1 - c2;
    coordinate c5 = c1 * c2;
    coordinate c6 = c1 / c2;

    return 0;
}