# Standard Function Type
- std::function
## ```Function Wrapper```
- This is a class that can wrap anything that callable (funtion or funtion object or function pointer or functor or ...) into a copyable object. 


```C++
#include "StandardFunctionType/StandardFunctionType.hpp"

using namespace StandardFunctionType;

int main()
{ 
    vector<string> vec {"Huy", "Nguyen", "Tung", "Lan"};

    int count = count_if(vec.begin(), vec.end(), CheckFunc);

    cout << count << endl;

    Check checkFunctor;
    
    run(CheckFunc);

    run(checkFunctor);

    run([](string name){ return name.size() == 6;});
    return 0;   
}

```