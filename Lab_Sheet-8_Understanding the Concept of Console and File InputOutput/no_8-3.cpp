/* 3.Write a program to overload stream operators to read a complex number and display the complex number in a+ib format.*/

#include <iostream>
using namespace std;

class complex
{
private:
    int a, b;

public:
    complex()

    {
        a = 0;
        b = 0;
    }
    friend istream &operator>>(istream &is, complex &tm);
    friend ostream &operator<<(ostream &os, complex &tm);
};

istream &operator>>(istream &is, complex &tm)
{
    is >> tm.a >> tm.b;
    return is;
}

ostream &operator<<(ostream &os, complex &tm)
{
    os << tm.a << "+i" << tm.b << flush;
    return os;
}

int main()
{
    complex c;
    cout << "Enter the complex number: ";
    cin >> c;
    cout << "The complex number be : " << c;
    return 0;
}