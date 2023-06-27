/*Write a program that illustrates the following relationship and comment on them.

i) const_object.non_const_mem_function

ii) const_object.const_mem_function

iii) non_const_object.non_const_mem_function

iv) non_const_object.const_mem_function*/

#include <iostream>

class Rect
{
private:
    float _length, _breadth;

public:
    Rect(float l, float b) : _length{l}, _breadth{b} {}

    // Non-const function
    void increaseLength(float incr)
    {
        _length += incr;
    }

    // Const function
    float getArea() const
    {
        return _length * _breadth;
    }
};

int main()
{
    // Non-const object
    Rect r1{7, 9};

    r1.increaseLength(3);                           // non_const_object.non_const_mem_function
    std::cout << "Area = " << r1.getArea() << '\n'; // non_const_object.const_mem_function

    // Constant object
    const Rect r2{3, 5};

    // const_object.non_const_mem_function
    // r2.increaseLength(3); // error: r2 is a constant object, it is not modifiable

    std::cout << "Area = " << r2.getArea() << '\n'; // const_object.const_mem_function

    return 0;
}