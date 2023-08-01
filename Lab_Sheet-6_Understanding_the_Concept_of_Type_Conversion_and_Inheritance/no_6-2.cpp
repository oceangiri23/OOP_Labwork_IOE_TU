/*
    2.  Write two classes to store distances in meter-centimeter and feet-inch systems respectively.
        Write conversions functions so that the program can convert objects of both types.
*/

#include <iostream>
using namespace std;

class DistanceInFeet;

class DistanceInMetric
{
private:
    int meter;
    float centimeter;

public:
    DistanceInMetric(int m = 0, float cm = 0) : meter{m}, centimeter{cm} {}

    DistanceInMetric operator=(DistanceInFeet);

    int getMeter() const { return meter; }
    float getCentimeter() const { return centimeter; }

    void display()
    {
        cout << meter << "m " << centimeter << "cm";
    }
};

class DistanceInFeet
{
private:
    int _feet;
    float _inches;

public:
    DistanceInFeet(int f = 0, float i = 0) : _feet{f}, _inches{i} {}

    DistanceInFeet(DistanceInMetric d)
    {
        float meter = d.getMeter() + d.getCentimeter() / 100.0f;
        _feet = meter * 3.28084;
        _inches = (meter * 3.28084 - _feet) * 12.0f;
    }

    int getFeet() const { return _feet; }
    float getInches() const { return _inches; }

    void display()
    {
        cout << _feet << "' " << _inches << "\"";
    }
};

DistanceInMetric DistanceInMetric::operator=(DistanceInFeet d)
{
    float ft = d.getFeet() + d.getInches() / 12.0f;
    meter = ft * 0.3048;
    centimeter = (ft * 0.3048 - meter) * 100.0f;
}

int main()
{
    DistanceInMetric d1(2, 73);
    DistanceInFeet d2(5, 9);

    DistanceInFeet d3 = d1;

    DistanceInMetric d4;
    d4 = d2;

    d1.display();
    cout << " = ";
    d3.display();

    cout << '\n';

    d2.display();
    cout << " = ";
    d4.display();

    return 0;
}