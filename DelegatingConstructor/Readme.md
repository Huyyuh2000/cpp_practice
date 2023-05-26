```C++
#include "DelegatingConstructor/DelegatingConstructor.hpp"

using namespace DelegatingConstructor;

int main()
{ 
    Car p;
    Car f("Ferrari");
    Ferrari c;

    p.print();
    return 0;   
}

```