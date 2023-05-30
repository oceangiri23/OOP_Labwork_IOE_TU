/*Define two namespaces: Square and Cube. In both the namespaces, define an integer variable named
 "num" and a function named "fun". The "fun" function in "Square" namespace, should return the
  square of an integer passed as an argument while the "fun" function in "Cube" namespace, should
   return the cube of an integer passed as an argument. In the main function, set the integer variables
   "num" of both the namespaces with different values. Then, compute and print the cube of the integer variable
   "num" of the "Square" namespace using the "fun" function of the "Cube" namespace and the square of the integer
    variable "num" of the "Cube" namespace using the "fun" function of the "Square" namespace.*/

#include <iostream>
using namespace std;

namespace Square
{
    int num;

    int fun(int num)
    {
        return num * num;
    }
}

namespace Cube
{
    int num;

    int fun(int num)
    {
        return num * num * num;
    }
}

int main()
{
    // Access variable using scope resolution operator (::)
    // Syntax: namespace_name::identifier
    Square::num = 8;
    Cube::num = 9;

    // ::foo is used to access the function of the respective namespace
    cout << "The square root be: " << Square::fun(Square::num) << endl;
    cout << "The cube root be: " << Cube::fun(Cube::num) << endl;

    return 0;
}