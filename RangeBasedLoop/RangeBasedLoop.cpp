#include "RangeBasedLoop.hpp"

RangeBaseLoopClass::RangeBaseLoopClass()
{
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);
    numbers.push_back(6);
    numbers.push_back(7);
    numbers.push_back(8);
    numbers.push_back(9);
    numbers.push_back(10);

    name = "Huy";
}

void RangeBaseLoopClass::Print()
{
    for (auto number: numbers)
    {
        cout << number << endl;
    }

    for (auto c: name)
    {
        cout << c << endl;
    }
}