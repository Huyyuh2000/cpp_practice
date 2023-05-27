- An lvalue (locator value) represents an object that occupies some identifiable location in memory (i.e. has an address).

- rvalues are defined by exclusion. Every expression is either an lvalue or an rvalue, so, an rvalue is an expression that does not represent an object occupying some identifiable location in memory.
```C++
#include "RandLvalue/RandLvalue.hpp"

using namespace RandLvalue;

int main()
{ 
    Test test1;

    cout << test1 << endl;

    // L value
    Test &test2 = test1;
    const Test &test2_1 = Test();
        // L value cannot assign non const object
    // Test &test2_1 = test();

    // R value
    Test &&test3 = Test(); // && does not mean referneces of referneces
    Test &&test4 = getTest();

    int a = 2;
    // TestFunc(a++, a++); // Lvalue will get error since passing non const value
    TestFunc(a++, ++a); 
    // TestFunc(++a, ++a); // This will get error in Rvalue since ++a is an Lvalue
    return 0;   
}

```