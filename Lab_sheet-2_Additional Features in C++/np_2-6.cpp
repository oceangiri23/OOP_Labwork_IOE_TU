/*Write a program that displays the current monthly salary of chief executive officer,
 information officer, and system analyst, programmer that has been increased by 9, 10, 12,
  and 12 percentages respectively in year 2010. Let us assume that the salaries in year 2009 are
Chief executive officer Rs. 35000/m
Information officer Rs. 25000/m
System analyst Rs. 24000/m
Programmer Rs. 18000/m
Make a function that takes two arguments; one salary and the other increment. Use proper default argument.*/

#include <iostream>
using namespace std;

void increase_salary(int &salary, int increment_percent = 12)
{
    if (increment_percent == 12)
    {
        salary *= 1.12;
        return;
    }

    salary *= 1 + increment_percent / 100.0f;
}

int main()
{
    int salary;

    cout << "Enter the salary: ";
    cin >> salary;

    cout << "\nSalary in the year 2009: " << salary << endl;

    if (salary == 35000)
    {
        increase_salary(salary, 9);
    }
    else if (salary == 25000)
    {
        increase_salary(salary, 10);
    }
    else if (salary == 24000 || salary == 18000)
    {
        increase_salary(salary, 12);
    }

    cout << "Salary in the year 2010: " << salary << endl;

    return 0;
}