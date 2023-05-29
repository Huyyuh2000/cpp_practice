- Why is this useful? Well, it means that a function template can pass its arguments through to another function whilst retaining the lvalue/rvalue nature of the function arguments by using std::forward. This is called "perfect forwarding", avoids excessive copying, and avoids the template author having to write multiple overloads for lvalue and rvalue references.

``` C++
#include "PerfectForwarding/PerfectForwarding.hpp"

using namespace PerfectForwarding;

int main()
{ 
    Test t1;

    call(t1);

    call(Test());
    return 0;   
}
```