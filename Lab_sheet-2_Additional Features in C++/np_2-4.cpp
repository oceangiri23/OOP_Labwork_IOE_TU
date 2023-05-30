/*Write a function that passes two temperatures by reference and sets the larger
 of the two numbers to a value entered by user by using return by reference.*/

#include <iostream>
using namespace std;

float larger(float, float);

float larger(float a, float b)
{

    if (a > b)
    {
        return a;
    }
    return b;
}

int main()
{

    float temp1, temp2, value;

    cout << "Enter tempr 1" << endl;
    cin >> temp1;

    cout << "Enter tempr 2" << endl;
    cin >> temp2;

    cout << "Enter tempr value" << endl;
    cin >> value;

    value = larger(temp1, temp2);

    cout << "The temp1 be : " << temp1 << endl;
    cout << "The temp2 be : " << temp2 << endl;
    cout << "The temp value be : " << value << endl;

    return 0;
}