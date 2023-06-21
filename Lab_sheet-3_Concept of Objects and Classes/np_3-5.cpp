/*Assume that an object represents an employee report that contains information like employee id, total bonus, total overtime
in a particular year. Use an array of objects to represent n employees' reports. Write a program that displays the report.
 Use setpara() member function to set report attributes by passing the arguments and member function displayreport() to show
 the report according to the parameter passed. Display the report in the following format.

An employee with ... ... ... has received Rs ... ... ...as a bonus

and

had worked ... ... ... hours as overtime in the year ... ... ...*/

#include <iostream>
using namespace std;

class Employe
{
private:
    int id;
    int bonus;
    int overtime;
    int time = 2023;

public:
    void assign(int _id, int _bonus, int _time)
    {
        id = _id;
        bonus = _bonus;
        overtime = _time;
    }

    void displayReport()
    {
        cout << "An employee with id " << id << " has received RS " << bonus << " as a bonus" << endl;
        cout << " and " << endl;
        cout << "has worked " << overtime << " hours as overtime in the year " << time << endl;
    }
};

int main()
{
    int n, a, b, c;

    cout << "Enter number of employs:";
    cin >> n;

    Employe employes[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter id of " << i + 1 << endl;
        cin >> a;

        cout << "Enter bouus of " << i + 1 << endl;
        cin >> b;

        cout << "Enter overtime of " << i + 1 << endl;
        cin >> c;
        employes[i + 1].assign(a, b, c);
    };

    for (int i = 0; i < n; i++)
    {
        employes[i + 1].displayReport();
    }

    return 0;
}