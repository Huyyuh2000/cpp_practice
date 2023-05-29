#include "PerfectForwarding.hpp"

namespace PerfectForwarding
{
void check(Test &test)
{
    cout << "lvalue" << endl;
}

void check(Test &&test)
{
    cout << "rvalue" << endl;
}
}