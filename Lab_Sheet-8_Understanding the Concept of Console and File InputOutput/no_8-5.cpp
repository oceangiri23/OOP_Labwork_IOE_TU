/* 5....Write a program for transaction processing that write and read object randomly to
and from a random access file so that user can add, update, delete and display
the account information (account-number, last-name, first-name, total-balance).*/

#include <iostream>
#include <fstream>
using namespace std;

class Transaction
{
private:
    string _first_name, _last_name, _account_number;
    float _total_balance;

public:
    void readData()
    {
        cout << "First name: ";
        cin >> _first_name;

        cout << "Last name: ";
        cin >> _last_name;

        cout << "Account number: ";
        cin >> _account_number;

        cout << "Total balance: ";
        cin >> _total_balance;
    }

    void showData()
    {
        cout << "\n\nFirst name: " << _first_name;
        cout << "\nLast name: " << _last_name;
        cout << "\nAccount number: " << _account_number;
        cout << "\nTotal balance: " << _total_balance;
    }
};

bool writeToFile(string filename)
{
    ofstream outfile(filename, ios::app | ios::binary);
    if (!outfile)
    {
        cerr << filename << " could not be opened!\n";
        return false;
    }

    Transaction t;
    t.readData();

    outfile.write(reinterpret_cast<char *>(&t), sizeof(t));
    outfile.close();

    return true;
}

bool readFromFile(string filename)
{
    ifstream infile(filename, ios::in | ios::binary);

    if (!infile)
    {
        cerr << filename << " could not be opened!\n";
        return false;
    }

    Transaction t;
    while (!infile.eof())
    {
        infile.read(reinterpret_cast<char *>(&t), sizeof(t));
        t.showData();
    }

    infile.close();

    return true;
}

bool deleteFromFile(string filename)
{
    ofstream outfile(filename, ios::out | ios::binary);

    if (!outfile)
    {
        cerr << filename << " could not be opened!\n";
        return false;
    }

    int n;
    cout << "Enter index of transaction to delete: ";
    cin >> n;

    outfile.seekp((n - 1) * sizeof(Transaction));

    int transaction_size = sizeof(Transaction);
    while (transaction_size--)
    {
        outfile << ' ';
    }

    outfile.close();

    return true;
}

bool updateFile(string filename)
{
    ofstream outfile(filename, ios::out | ios::binary);

    if (!outfile)
    {
        cerr << filename << " could not be opened!\n";
        return false;
    }

    int n;
    cout << "Enter index of transaction to update: ";
    cin >> n;

    outfile.seekp((n - 1) * sizeof(Transaction));

    Transaction t;
    t.readData();

    outfile.write(reinterpret_cast<char *>(&t), sizeof(t));
    outfile.close();

    return true;
}

int main()
{
    int choice;
    string filename = "transactions.dat";

    cout << "*** Transaction processing system ***\n";
    cout << "Choose an option:\n";
    cout << "1 --> Add transaction\n";
    cout << "2 --> Display all transactions\n";
    cout << "3 --> Update transaction\n";
    cout << "4 --> Delete transaction\n";
    cout << "5 --> Exit\n";

    while (true)
    {
        cout << "\nEnter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            if (!writeToFile(filename))
            {
                cout << "Failed to write to file\n";
                return 1;
            }

            break;
        case 2:
            if (!readFromFile(filename))
            {
                cout << "Failed to read from file\n";
                return 1;
            }

            break;

        case 3:
            if (!updateFile(filename))
            {
                cout << "Failed to update file\n";
                return 1;
            }

            break;
        case 4:
            if (!deleteFromFile(filename))
            {
                cout << "Failed to delete from file\n";
                return 1;
            }

            break;

        case 5:
            return 0;

        default:
            cout << "Invalid choice!\n";
            break;
        }
    }

    return 0;
}