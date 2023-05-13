#include "Auto.hpp"

int get()
{
    return 1234;
}

auto AutoFunctionTest() -> decltype(get())
{
    return get();
}