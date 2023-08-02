/*1.  Write a program to demonstrate the use of different ios flags and functions to
        format the output. Create a program to generate the bill invoice of a department store
        by using different formatting.
*/

#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::left); // setf() turns on the flags specified
    cout.width(30);
    cout << "Item Name";

    cout.width(20);
    cout << "Quantity";

    cout.width(15);
    cout << "Rate (Rs)";

    cout.width(20);
    cout << "Totoal Amount (Rs)" << '\n'; // newline should

    string items[3] = {"Chocolate", "Banana", "Noodles"};
    float rate[3] = {100, 15, 25};
    int quantity[3] = {2, 12, 5};

    for (int i = 0; i < 3; i++)
    {

        cout.setf(ios::left, ios::adjustfield);
        cout.width(20);
        cout << items[i];

        cout.setf(ios::right);
        cout.width(13);
        cout << quantity[i];

        cout.setf(ios::fixed);
        cout.width(22);
        cout.precision(2);
        cout << rate[i];

        cout.width(20);
        cout << quantity[i] * rate[i] << '\n';
    }

    return 0;
}