/*
    2.  Write a program to create a user-defined manipulator that will format the output by
        setting the width, precision, and fill character at the same time by passing arguments.
*/

#include <iostream>
#include <iomanip>
using namespace std;

class Manipulator
{
private:
    int width, precision;
    char fill_char;

public:
    Manipulator(int wth, int prcn, char fl_char) : width{wth}, precision{prcn}, fill_char{fl_char} {}

    // Overload the insertion operator (<<) to format the output for this class's object
    friend ostream &operator<<(ostream &os, const Manipulator &m);
};

ostream &operator<<(ostream &os, const Manipulator &m)
{
    os << setw(m.width) << fixed << setprecision(m.precision) << setfill(m.fill_char);
    os << flush;

    return os;
}

Manipulator wpf(int width, int precision, char fill)
{
    return Manipulator(width, precision, fill);
}

int main()
{
    cout << 123.5 << ' ' << wpf(10, 5, '*') << 123.456 << '\n';

    return 0;
}