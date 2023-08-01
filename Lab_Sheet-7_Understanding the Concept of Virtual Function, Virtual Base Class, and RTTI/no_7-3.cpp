/*Write a program with an abstract class Student and create derive classes Engineering,
 Medicine and Science from base class Student. Create the objects of the derived classes
  and process them and access them using an array of pointers of type base class Student.*/

#include <iostream>;
using namespace std;

class Student
{
public:
    virtual void print()
    {
        cout << " Student Class" << endl;
    } // to override
};

class Engineering : public Student
{
public:
    void print() override
    {
        cout << "Engineering student Class" << endl;
    } // redefinition of base class function in its derived class
};

class Medicine : public Student
{
public:
    void print() override
    {
        cout << "Medicine student Class" << endl;
    }
};

class Science : public Student
{
public:
    void print() override
    {
        cout << "Science student class" << endl;
    }
};

int main()
{
    Student *s[3];
    s[0] = new Engineering(); // naya address banayera tesma save garcha
    s[1] = new Medicine();
    s[2] = new Science();

    s[0]->print();
    s[1]->print();
    s[2]->print();

    return 0;
}