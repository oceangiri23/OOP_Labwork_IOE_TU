/*Assume that one constructor initializes data member say num_vehicle,
 hour, and rate. There should be a 10% discount if num_vehicle exceeds 10.
  Display the total charge. Use two objects and show a bit-by-bit copy of one
   object to another (make your own copy constructor).*/

#include <iostream>
using namespace std;

class vehicle
{
private:
    int num_vehicle;
    int hour;
    int ratePerHour;

public:
    vehicle(int n, int h, int r)
    {
        num_vehicle = n;
        hour = h;
        ratePerHour = r;
    }

    void calculate()
    {
        if (num_vehicle > 10)
        {
            cout << "The total charge is:" << 0.9 * hour * ratePerHour << endl;
        }
        else
        {
            cout << "The total charge is:" << hour * ratePerHour << endl;
        }
    }
};

int main()
{
    vehicle v1(14, 4, 500);

    vehicle v2 = v1;
    v2.calculate();

    return 0;
}