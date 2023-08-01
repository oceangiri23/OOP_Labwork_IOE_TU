/*Create a class Person and two derived classes Employee and Student,
 inherited from class Person. Now create a class Manager which is derived from two
 base classes Employee and Student. Show the use of the virtual base class.*/

#include <iostream>
using namespace std;

class Person
{
protected:
    int Person_id;

public:
    void getPersonID(int i)
    {
        Person_id = i;
    };
};

class Employee : virtual public Person
{
protected:
    int Employee_id;

public:
    void getEmployeeID(int n)
    {
        Employee_id = n;
    };
};

class Student : virtual public Person
{
protected:
    int Student_id;

public:
    void getStudentID(int m)
    {
        Student_id = m;
    };
};

class Manager : public Employee, public Student
{
protected:
    int Manager_id;

public:
    void getManagerID(int j)
    {
        Manager_id = j;
    };

    void Result()
    {
        cout << "The Person id be: " << Person_id << endl;
        cout << "The Employee id be: " << Employee_id << endl;
        cout << "The Student id be: " << Student_id << endl;
        cout << "The Manager id be: " << Manager_id << endl;
    }
};

int main()
{
    Manager M;
    M.getPersonID(1111);

    M.getStudentID(2222);

    M.getEmployeeID(3333);

    M.getManagerID(8888);

    M.Result();

    return 0;
}
