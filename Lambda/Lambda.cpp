#include "Lambda.hpp"

namespace Lambda_p
{
void RunPrint(void (*pFunc)())
{
    pFunc();
}

void Greet(void (*pFunc)(string))
{
    pFunc("Huy");
}
}

