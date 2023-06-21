/*Write a program with classes to represent a circle, rectangle, and triangle.
 Each class should have data members to represent the actual objects and member
 functions to read and display objects, find perimeter and area of the objects,
 and other useful functions. Use the classes to create objects in your program.*/

#include <iostream>
using namespace std;

class circle
{
private:
    float radius;

public:
    void getcircle()
    {
        cout << "Enter radius of circle: ";
        cin >> radius;
        cout << "The perimeter be:" << (2 * 3.14 * radius) << endl;
        cout << "The area be: " << (3.14 * radius * radius) << endl;
    }
};

class rectangle
{
private:
    float length, breadth;

public:
    void getrectangle()
    {
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter breadth of rectangle: ";
        cin >> breadth;
        cout << "The perimeter be:" << (2 * (length + breadth)) << endl;
        cout << "The area be: " << (length * breadth) << endl;
    }
};

class triangle
{
private:
    float length, height;

public:
    void gettriangle()
    {
        cout << "Enter length of triangle: ";
        cin >> length;
        cout << "Enter height of triangle: ";
        cin >> height;
        cout << "The area be: " << 0.5 * (length * height) << endl;
    }
};

int main()
{
    circle c;
    rectangle r;
    triangle t;

    c.getcircle();
    r.getrectangle();
    t.gettriangle();
    return 0;
}