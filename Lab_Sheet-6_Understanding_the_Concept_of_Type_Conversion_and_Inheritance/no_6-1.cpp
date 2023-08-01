/* 1.  Write a program that can convert the Distance (meter, centimeter) to meters measurement in
        float and vice versa. Make a class distance with two data members, meter and centimeter.
        You can add function members as per your requirement.
*/

#include <iostream>
using namespace std;

class Distance
{
private:
    int meter, centimeter;

public:
    Distance(int m, int cm) : meter{m}, centimeter{cm} {}

    Distance(float m)
    {
        meter = m;
        centimeter = (m - meter) * 100;
    }

    operator float()
    {
        return meter + centimeter / 100.0f;
    }

    void display()
    {
        cout << meter << "m " << centimeter << "cm";
    }
};

int main()
{
    Distance d(2, 34);
    d.display();
    cout << " = " << float(d) << "m" << '\n';

    float m = 1.78;
    Distance d2(m);
    cout << m << 'm' << " = ";
    d2.display();

    return 0;
}