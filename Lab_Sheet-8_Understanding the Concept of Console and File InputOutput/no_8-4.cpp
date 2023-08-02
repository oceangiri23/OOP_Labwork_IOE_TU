/* 4. Write a program that stores the information about students (name, student id, department, and address)
in a structure and then transfers the information to a file in your directory. Finally, retrieve the information
from your file and print it in the proper format on your output screen.*/

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct students
{
    string name;
    string id;
    string department;
    string address;
};

int main()
{

    fstream file("student.txt", ios::in | ios::out | ios::app | ios::binary);

    if (!file)
    {
        std::cerr << "student.txt"
                  << " could not be opened!\n";
        return 1;
    }

    int n;
    cout << "Enter the number of students:";
    cin >> n;
    students s[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter name of "
             << "[" << i + 1 << "] :";
        cin >> s[i].name;
        cout << "Enter id of "
             << "[" << i + 1 << "] :";
        cin >> s[i].id;
        cout << "Enter department of "
             << "[" << i + 1 << "] :";
        cin >> s[i].department;
        cout << "Enter address of "
             << "[" << i + 1 << "] :";
        cin >> s[i].address;

        file.write(reinterpret_cast<char *>(&s[i]), sizeof(s[i]));
    };

    file.clear();
    file.seekg(0);

    cout << "\n*** Student Database ***";

    students st;

    // Read file line by line
    while (!file.eof())
    {

        file.read(reinterpret_cast<char *>(&st), sizeof(st)); // convert a pointer of some data type into a pointer of another data type

        cout << "\n\nName: " << st.name;
        cout << "\nID: " << st.id;
        cout << "\nDepartment: " << st.department;
        cout << "\nAddress: " << st.address;
    }

    file.close();

    return 0;
}
