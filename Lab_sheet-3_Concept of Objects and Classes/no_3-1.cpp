/* Write a simple program that converts the temperature in Celsius scale
 to Fahrenheit scale and vice versa using the basic concept of class and object.
 Make separate classes for Celsius and Fahrenheit which will have the private members that
 hold the temperature value and make conversion functions in each class for conversion from one
 to another. For example, you need to have a function toFahrenheit() in class Celsius that converts
  to Fahrenheit scale and returns the value. */

#include <iostream>
using namespace std;

class Celsius
{
private:
    float frenheit;

public:
    float toFahrenheit(float cel)
    {
        frenheit = (1.8 * cel) + 32;
        return frenheit;
    }
};

class Frenheit
{
private:
    float celsius;

public:
    float toCelsius(float fren)
    {
        celsius = (fren - 32) / 1.8;
        return celsius;
    }
};

int main()
{
    Celsius c;
    Frenheit f;
    float a;
    float b;

    cout << "Enter tempr in celsius " << endl;
    cin >> a;
    cout << "The tempr in frenheit be " << c.toFahrenheit(a) << endl;

    cout << "Enter tempr in frenheit " << endl;
    cin >> b;
    cout << "The tempr in celsius be " << f.toCelsius(b) << endl;

    return 0;
}