/*
    4.  Write a program that demonstrates the use of multiple catch handling, re-throwing an
        exception, and catching all exceptions.
*/

#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 0;

    try
    {
        try
        {
            if (b == 0)
            {
                throw "Division by zero!";

                // throw 5;   // throw an exception of type int (i.e. catch(int) executes)
                // throw 5.0; // throw an exception of type double (non specified so catch(...) executes)
            }

            cout << a / b << '\n';
        }
        catch (const char *e)
        {
            cout << "Error: " << e << '\n';

            // Rethrow the exact same exception that was just caught
            throw;
        }
    }
    catch (const char *e)
    {
        cout << "Error: " << e << '\n';
    }
    catch (int)
    {
        // Handle an exception of type int
        // Executed if the previous try-catch block throws an exception of type int
        cout << "Error: Exception of type int!\n";
    }
    catch (...)
    {
        // Catch all other exceptions
        cout << "Error: Unknown error!\n";
    }

    return 0;
}