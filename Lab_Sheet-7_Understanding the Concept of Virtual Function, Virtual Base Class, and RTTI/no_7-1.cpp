/*
    1.  Write a program to create a class shape with functions to find the area of the
        shapes and display the names of the shapes and other essential components of the class.
        Create derived classes circle, rectangle, and trapezoid each having overriding functions
        area() and display(). Write a suitable program to illustrate virtual functions and virtual
        destructors.
*/

#include <iostream>
using namespace std;

class shape
{
public:
    virtual ~shape()
    {
        cout << "Calling ~Shape()";
    }

    virtual float area()
    {
        return 0;
    }

    virtual void display()
    {
        cout << "Shape\n";
    }
};

class Circle : public shape
{
private:
    float radius;

public:
    Circle(float r) : radius{r} {}

    ~Circle() override
    {
        cout << "Calling ~Circle()\n";
    }

    float area() override
    {
        return 3.14 * radius * radius;
    }

    void display() override
    {
        cout << "Circle\n";
    }
};

class Rectangle : public shape
{
private:
    float _length, _breadth;

public:
    Rectangle(float l, float b) : _length{l}, _breadth{b} {}

    ~Rectangle()
    {
        cout << "Calling ~Rectangle()\n";
    }

    float area() override
    {
        return _length * _breadth;
    }

    void display() override
    {
        cout << "Rectangle\n";
    }
};

class Trapezoid : public shape
{
private:
    float _a, _b;
    float _h;

public:
    Trapezoid(float a, float b, float h) : _a{a}, _b{b}, _h{h} {}

    float area() override
    {
        return 0.5f * (_a + _b) * _h;
    }

    void display() override
    {
        cout << "Trapezoid\n";
    }
};

int main()
{
    shape *shapes[3];
    Circle c(5);
    Rectangle r(3, 7);
    Trapezoid t(7, 3, 5);

    shapes[0] = &c;
    shapes[1] = &r;
    shapes[2] = &t;

    shapes[0]->display();
    cout << shapes[0]->area() << '\n';

    shapes[1]->display();
    cout << shapes[1]->area() << '\n';

    shapes[2]->display();
    cout << shapes[2]->area() << '\n';

    // calling destructors
    delete shapes[0];
    delete shapes[1];
    delete shapes[2];

    return 0;
}