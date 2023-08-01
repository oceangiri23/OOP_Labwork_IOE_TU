/*
    Lab 6
    Understanding the Concept of Type Conversion and Inheritance
    5.  Write a base class that asks the user to enter a complex number and make a derived class that
        adds the complex number of its own with the base. Finally, make a third class that is a friend of
        derived and calculate the difference of the base complex number and its own complex number.
*/

#include <iostream>
using namespace std;

class Complex
{
protected:
    float real, imaginary;

public:
    Complex(float r = 0, float i = 0) : real{r}, imaginary{i} {}

    void prompt()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imaginary;
    }

    void display()
    {
        cout << '(' << real << ", " << imaginary << ")\n";
    }

    friend class Complex_;
    friend class Difference;
};

class Complex_ : public Complex
{
public:
    Complex_(float r = 0, float i = 0) : Complex(r, i) {}

    Complex_ operator+(const Complex &c)
    {
        return Complex_(real + c.real, imaginary + c.imaginary);
    }

    friend class Difference;
};

class Difference
{
public:
    Complex result(const Complex &c1, const Complex_ &c2)
    {
        return Complex(c1.real - c2.real, c1.imaginary - c2.imaginary);
    }
};

int main()
{
    Complex c1;
    Complex_ c2;
    cout << "First Complex Number" << endl;
    c1.prompt();

    cout << '\n';
    cout << "Second Complex Number" << endl;
    c2.prompt();

    cout << '\n';
    Complex c3 = c2 + c1;
    c3.display();

    Difference d;
    c3 = d.result(c1, c2);
    c3.display();

    return 0;
}