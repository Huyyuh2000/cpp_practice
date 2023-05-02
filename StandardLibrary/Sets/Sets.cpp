#include "Sets.hpp"

TestSetClass::TestSetClass()
{
    numbers.insert(50);
    numbers.insert(45);
    numbers.insert(30);
    numbers.insert(25);
    numbers.insert(30);
    numbers.insert(31);
}

void TestSetClass::displayAllElement()
{
    for (set<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
    {
        cout << *it << endl;
    }
}

bool TestSetClass::findElement(int number)
{
    if (numbers.find(number) != numbers.end())
    {
        cout << "Find " << number << endl;
        return true;
    }
    else
    {
        cout << "Cannot find " << number << endl;
        return false;
    }
}