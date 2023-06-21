/*Create a class called carpark that has int data member for car id,
 int data member for charge/hour, and float data member for the parked time.
  Make functions to set data members and show the charges and parked hours of the corresponding car id.
   Make functions for setting and showing the data members. Member function should be called from other functions.*/

#include <iostream>
using namespace std;

class parking
{
private:
    int carId;
    int chargePerHour;
    int parkedTime;

public:
    void id(int n)
    {
        carId = n;
    }
    void charge(int c)
    {
        chargePerHour = c;
    }
    void time(int t)
    {
        parkedTime = t;
    }

    void result()
    {
        cout << "The car id be: " << carId << endl;
        cout << "The charge per hour is Rs: " << chargePerHour << endl;
        cout << "Your total time is : " << parkedTime << endl;
        cout << "Your total charge be Rs:  " << (chargePerHour * parkedTime) << endl;
    }
};

int main()
{
    parking p;
    p.id(1);
    p.charge(200);
    p.time(3);
    p.result();

    return 0;
}