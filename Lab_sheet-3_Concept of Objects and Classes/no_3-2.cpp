/*Assume that you want to check whether the number is prime or not.
 Write a program that asks for numbers repeatedly. When it finishes checking
  a number the program asks if the user wants to do another calculation.
   The response can be 'y' or 'n'. Don't forget to use the object-oriented concept.*/

#include <iostream>
using namespace std;

class prime
{
private:
    int i;
    int flag = 0;

public:
    int checkPrime(int num)
    {
        for (i = 2; i < num; ++i)
        {
            if (num % i == 0)
            {
                flag = 1;
            }
        }
        return flag;
    }
};

int main()
{

    prime p;
    int n;
    string input;

    while (true)
    {

        cout << "Enter a number :";
        cin >> n;

        if (p.checkPrime(n) == 0)
        {
            cout << "The number is prime." << endl;
        }
        else
        {
            cout << "The number is not prime." << endl;
        }

        cout << "Do you want to continue:(y/n)";
        cin >> input;

        if (input == "n" || input == "N")
        {
            break;
        }
    }
    return 0;
}