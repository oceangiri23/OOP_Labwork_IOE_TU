/*
    4.  Write three derived classes inheriting functionality of base class person (should have a member function that
        asks to enter name and age) and with added unique features of student, and employee, and functionality to assign,
        change and delete records of student and employee. And make one member function for printing the address of the
        objects of classes (base and derived) using this pointer. Create two objects of the base class and derived classes
        each and print the addresses of individual objects. Using a calculator, calculate the address space occupied by
        each object and verify this with address spaces printed by the program.
*/

#include <iostream>
#include <cstring>
using namespace std;

class Person
{
protected:
    char name[100];
    int age;

public:
    Person()
    {
        fflush(stdin);
        cout << "Name: ";
        gets(name);

        cout << "Age: ";
        cin >> age;
    }

    void setDetails(const char nme[], int ag)
    {
        strcpy(name, nme);
        age = ag;
    }

    void display()
    {
        cout << "\nName: " << name << '\n';
        cout << "Age: " << age << '\n';
    }

    void displayAddress()
    {
        cout << "Address of this object: " << this << '\n';
    }

    void deleteObject()
    {
        delete this;
    }
};

class Student : public Person
{
private:
    char _id[20];

public:
    Student()
    {

        fflush(stdin);
        cout << "Id: ";
        gets(_id);
    }

    void setDetails(const char name[], int age, const char id[])
    {
        Person::setDetails(name, age);
        strcpy(_id, id);
    }

    void display()
    {
        cout << "\nStudent details:";

        Person::display();
        cout << "Id: " << _id << '\n';
    }
};

class Employee : public Person
{
private:
    char id[20];
    int salary;

public:
    Employee()
    {
        fflush(stdin);
        cout << "Id: ";
        gets(id);

        cout << "Salary: ";
        cin >> salary;
    }

    void setDetails(const char _name[], int _age, const char _id[], int _salary)
    {
        Person::setDetails(_name, _age);
        strcpy(id, _id);
        salary = _salary;
    }

    void display()
    {
        cout << "\nEmployee details:";

        Person::display();
        cout << "Id: " << id << '\n';
        cout << "Salary: " << salary << '\n';
    }
};

int main()
{
    cout << "Enter details for person:\n";
    Person p;
    p.display();
    p.displayAddress();
    p.setDetails("Jimmy", 45);
    p.display();

    cout << "\nEnter details for student:\n";
    Student s;
    s.display();
    s.displayAddress();
    s.setDetails("Sagar", 32, "078bct071");
    s.display();

    cout << "\nEnter details for employee:\n";
    Employee e;
    e.display();
    e.displayAddress();
    e.setDetails("Henry", 21, "Margret", 10000);
    e.display();

    p.deleteObject();
    s.deleteObject();
    e.deleteObject();

    return 0;
}