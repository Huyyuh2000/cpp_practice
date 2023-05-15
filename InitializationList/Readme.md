```C++
#include "InitializationList/InitializationList.hpp"

using namespace InitializationList;

int main()
{ 
    Test test{"Huy", "Hoa", "Hung"};
    test.print({"One", "Two", "Three", "Four"});
    test.print({1,3,4,5});
    return 0;   
}
```