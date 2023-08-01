/*Create a polymorphic class Vehicle and create other derived classes Bus, Car, and Bike from Vehicle.
 Illustrate RTTI by the use of dynamic_cast and typeid operators in this program.*/

#include <iostream>
#include <typeinfo>
using namespace std;

class Vehicle
{
public:
    // For dynamic downcasting, base class must have at least one virtual function
    virtual void print()
    {
        cout << "Vehicle\n";
    }
};

class Bus : public Vehicle
{
public:
    void print() override
    {
        cout << "Bus\n";
    }
};

class Car : public Vehicle
{
public:
    void print() override
    {
        cout << "Car\n";
    }
};

class Bike : public Vehicle
{
public:
    void print() override
    {
        cout << "Bike\n";
    }
};

int main()
{
    Bus bus;

    // Upcasting - Casting derived class to base class
    Vehicle *v = &bus;
    cout << typeid(v).name() << '\n';
    // Downcasting - Dynamic casting base class to derived class
    Bus *busp = dynamic_cast<Bus *>(v);

    if (busp == NULL)
    {
        cout << "busp is nullptr\n";
        return -1;
    }

    busp->print();

    cout << typeid(bus).name() << '\n';
    cout << typeid(v).name() << '\n';
    cout << typeid(*busp).name(); // Information about the object pointed by busp

    return 0;
}