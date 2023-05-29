#include "Bind.hpp"

namespace Bind
{
int Test::add(int a, int b, int c)
{
    cout << a << ", " << b << ", " << c << endl;
    return a+b+c;
}

int run(function<int(int, int)> func, int a, int b)
{
    return func(a, b);
}


}