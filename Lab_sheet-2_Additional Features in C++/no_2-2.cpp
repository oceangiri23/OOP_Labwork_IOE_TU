/*Write a program using the function overloading that converts feet to inches.
 Use function with no argument, one argument and two arguments. Decide yourself
 the types of arguments. Use pass by reference in any one of the function above.*/

#include <iostream>
using namespace std;

// getInches with return type void and without any parameter
void convert()
{
    cout << "\n5feet = 60inches" << endl;
}

// getInches with return type and parameter int
int convert(int ft)
{
    return ft * 12;
}

// getInches with return type int and parameters int& and int&
int convert(int &ft, int &inches)
{
    return ft * 12 + inches;
}

int main()
{
    int ft, inches;

    cout << "Enter feet: ";
    cin >> ft;

    cout << "Enter inches: ";
    cin >> inches;

    convert();
    cout << ft << "ft = " << convert(ft) << "inches" << endl;
    cout << ft << "ft " << inches << "inches = " << convert(ft, inches) << endl;

    return 0;
}