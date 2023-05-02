#include "SortingVector.hpp"

TestSorting::TestSorting(int id, string name) : id(id) ,  name(name) {}

TestSorting::TestSorting() : id(0), name("") {}

void TestSorting::Print()
{
    cout << id << ": " << name << endl;
}

// bool TestSorting::operator<(const TestSorting& other) const
// {
//     return name < other.name;
// }

bool SortFunction(const TestSorting& a, const TestSorting& b)
{
    return a.name < b.name;
}

SortingVector::SortingVector()
{
    tests.push_back(TestSorting(23, "Huy"));
    tests.push_back(TestSorting(33, "Tung"));
    tests.push_back(TestSorting(27, "Nguyen"));
}

void SortingVector::Sorting()
{
    sort(tests.begin(), tests.end(), SortFunction); // Having SortFunction only use function sort outside of class TestSorting
}

void SortingVector::displayAllElement()
{
    for (int i =0; i < tests.size(); i++)
    {
        tests[i].Print();
    }
}