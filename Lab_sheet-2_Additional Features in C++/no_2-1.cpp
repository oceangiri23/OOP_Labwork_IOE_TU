/*Write a program to set a structure to hold a date (mm,dd and yy), assign values to the members of the
 structure and print out the values in the format11/28/2004 by function. Pass the structure to the function*/

#include <iostream>
using namespace std;

struct student
{
   int year;
   int month;
   int day;
};

void printdata(student);
int main()
{
   student s;

   cout << "Enter year";
   cin >> s.year;

   cout << "Enter month";
   cin >> s.month;

   cout << "Enter day";
   cin >> s.day;
   printdata(s);

   return 0;
}

void printdata(student s)
{

   cout << "The data is : " << endl;
   cout << s.day << "/" << s.month << "/" << s.year;
}