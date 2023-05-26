#include "StandardFunctionType.hpp"

namespace StandardFunctionType
{
bool Check::operator()(string &test)
{
    return test.size() == 4;
}

bool CheckFunc(string &test)
{
    return test.size() == 3;
}

void run(function<bool(string&)> check)
{
    string name = "Huy";
    cout << check(name) << endl;
}
}