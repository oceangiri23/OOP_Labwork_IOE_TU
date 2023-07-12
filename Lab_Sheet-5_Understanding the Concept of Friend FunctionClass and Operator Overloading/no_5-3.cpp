/*Write a program to compare two objects of a class that contains an integer
value as its data member. Make overloading functions to overload equality(==),
 less than(<), greater than(>), not equal (!=), greater than or equal to (>=), and
 less than or equal to(<=) operators using member operator functions.*/

#include <iostream>
using namespace std;

class compare
{
private:
    int n;

public:
    compare(int a) : n{a} {}

    bool operator==(const compare &c)
    {
        return n == c.n;
    }
    bool operator<(const compare &c)
    {
        return n < c.n;
    }
    bool operator>(const compare &c)
    {
        return n > c.n;
    }
    bool operator!=(const compare &c)
    {
        return n != c.n;
    }
    bool operator>=(const compare &c)
    {
        return n >= c.n;
    }
    bool operator<=(const compare &c)
    {
        return n <= c.n;
    }
};

int main()
{

    compare c1(5), c2(9);

    cout << "c1==c2  " << ((c1 == c2) ? "true" : "false") << endl;
    cout << "c1<c2  " << ((c1 < c2) ? "true" : "false") << endl;
    cout << "c1>c2  " << ((c1 > c2) ? "true" : "false") << endl;
    cout << "c1!=c2  " << ((c1 != c2) ? "true" : "false") << endl;
    cout << "c1>=c2  " << ((c1 >= c2) ? "true" : "false") << endl;
    cout << "c1<=c2  " << ((c1 <= c2) ? "true" : "false") << endl;

    return 0;
}
