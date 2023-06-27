/*Write a class that can store Department ID and Department Name with constructors
 to initialize its members. Write destructor member in the same class and display
  the message "Object n goes out of the scope". Your program should be made such that
  it should show the order of constructor and destructor invocation.*/

#include <iostream>
using namespace std;
#include <cstring>

class Department
{

private:
    int id;
    string name;

public:
    Department() : name("Null")
    {
        id = 0;
    };

    Department(int i, string n) : name(n)
    {
        id = i;
    }

    void output()
    {
        cout << "The department id is: " << id << endl;
        cout << "The department name is: " << name << endl;
    }
    ~Department()
    {
        cout << "Object n goes out of the scope";
    }
};

int main()
{
    Department d1;
    Department d2(0034, "Department of computer Engineering");
    d2.output();
    return 0;
}