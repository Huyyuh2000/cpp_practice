```C++
#include "MoveConstructor/MoveConstructor.hpp"

using namespace MoveConstructor;

int main()
{ 
    // Test test1 = Test();

    // vector<Test> test2;
    // test2.push_back(Test()); // vector using move contructor not copy constructor which more efficiency

    Test test3;
    test3 = getTest();

    return 0;   
}
```