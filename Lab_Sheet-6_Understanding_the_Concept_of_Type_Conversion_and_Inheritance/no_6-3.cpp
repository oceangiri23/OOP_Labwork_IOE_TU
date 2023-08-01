/*

    3.  Create a class called Musicians to contain three methods string(), wind(), and perc().
        Each of these methods should initialize a string array to contain the following instruments
        -  veena, guitar, sitar, sarod and mandolin under string()
        -  flute, clarinet saxophone, nadhaswaram, and piccolo under wind()
        -  tabla, mridangam, bangos, drums and tambour under perc()
        It should also display the contents of the arrays that are initialized.

        Create a derived class called TypeIns to contain a method called get() and show().
        The get() method must display a menu as follows
        Type of instruments to be displayed
        a.  String instruments
        b.  Wind instruments
        c.  Percussion instrumentsl
        The show() method should display the relevant detail according to our choice.
        The base class variables must be accessible only to their derived classes.
*/

#include <iostream>
using namespace std;

class Musicians
{
public:
    void strings()
    {
        string stringInstruments[5] = {"Veena", "Guitar", "Sitar", "Sarod", "Mandolin"};

        cout << "String instruments:\n";
        for (int i = 0; i < 5; i++)
        {
            cout << stringInstruments[i] << '\n';
        }
    }

    void wind()
    {
        string windInstruments[5] = {"Flute", "Clarinet", "Nadhaswaram", "Piccolo", "Saxophone"};

        cout << "\nWind instruments:\n";
        for (int i = 0; i < 5; i++)
        {
            cout << windInstruments[i] << '\n';
        }
    }

    void perc()
    {
        string percInstruments[5] = {"Tabla", "Mridangam", "Bangos", "Drums", "Tambour"};

        cout << "\nPercussion instruments:\n";
        for (int i = 0; i < 5; i++)
        {
            cout << percInstruments[i] << '\n';
        }
    }
};

class TypeIns : public Musicians
{
public:
    char get()
    {
        char choice;
        cout << "\nType of instruments to be displayed\n";
        cout << "a. String instruments\n";
        cout << "b. Wind instruments\n";
        cout << "c. Percussion instruments\n";
        cout << "Enter your choice: ";
        cin >> choice;

        return choice;
    }

    void show()
    {
        char choice = get();
        switch (choice)
        {
        case 'a':
        case 'A':

            cout << '\n';
            strings();
            break;
        case 'b':
        case 'B':
            wind();
            break;
        case 'c':
        case 'C':
            perc();
            break;
        default:
            cout << "Invalid choice\n";
            break;
        }
    }
};

int main()
{
    Musicians m;

    m.strings();
    m.wind();
    m.perc();

    TypeIns t;
    t.show();

    return 0;
}