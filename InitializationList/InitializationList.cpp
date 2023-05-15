 #include "InitializationList.hpp"

using namespace InitializationList;

Test::Test(initializer_list<string> texts)
{
    for (auto value : texts)
    {
        cout << value << endl;
    }
}

void Test::print(initializer_list<string> texts)
{
    for (auto value : texts)
    {
        cout << value << endl;
    }
}

void Test::print(initializer_list<int> numbers)
{
    for (auto value : numbers)
    {
        cout << value << endl;
    }
}