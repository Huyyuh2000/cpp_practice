#include "RandLvalue.hpp"

namespace RandLvalue
{
Test::Test()
{
    cout << "Default constructor is running" << endl;
}

ostream &operator<<(ostream &out, const Test &test)
{
    out << "Hello from test" << endl;
    return out;
}

Test getTest()
{
    return Test();
}

void TestFunc(int &&Rvalue,int &Lvalue)
{
    cout << "R value:" << Rvalue << endl;
    cout << "L value:" << Lvalue << endl;
}
}