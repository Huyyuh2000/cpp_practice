#include "ObjectSlicingandPolymorphism.hpp"

void Parent::print()
{
    cout << "Parent class" << endl;
}

Parent::Parent() : a(0)
{
}

Parent::Parent(const Parent &other) : a(0)
{
    cout << "Copy constructor parent" << endl;
    a = other.a;
}

void Child::print()
{
    cout << "Child class" << endl;
}