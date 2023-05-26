# Lambda:
- Syntax: [](){}

## When to use lambda function
- Lambda make code more readable
- Lambda improve locality of the code
- Lambda allow to store state easiy
- Lambda allow several Overload in the same place

```C++
#include "Lambda/Lambda.hpp"

using namespace Lambda_p;

class LambdaCapturingTest
{
public:
    void run()
    {
        int three{3};
        int four{4};

        [three, four, this] () { //this to capture all the instance variables
            cout << "one: " << one << endl;
            cout << "two: " << two << endl;
            cout << "three: " << three << endl;
            cout << "four: " << four << endl;

            one = 3; // this capture reference by default
        }();
    }
private:
    int one{1};
    int two{2};
};

int main()
{ 
    // Basic lambda
    auto p_Lambda_HW = [] () { cout << "Hello From Lamda" << endl; };
    RunPrint(p_Lambda_HW);

    // Lambda parameter and return type
    Greet([](string name){ cout << name << endl; });

    // Lambda return value
    auto pDivide = [](double a, double b) -> double
    {
        if (b==0)
        {
            return 0;
        }
        else
        {
        return a/b;
        }
    };

    cout << pDivide(19.2, 2) << endl;

    // Lambda capture expression
    int a = 1;
    int b = 2;
    int c = 3;

    // capture a, b by value
    [a, b](){ cout << "a: " << a << endl;
              cout << "b: " << b << endl;
              /* Cannot assign new value for a or b*/}();

    // capture all by value
    [=](){ cout << "a: " << a << endl;
           cout << "b: " << b << endl;}();

    // capture a by reference
    [&a]() {a=5;
            cout << "a: " << a << endl;}(); // can assign new value for a

    // capture all by reference
    [&](){a=6; b=7;
          cout << "a: " << a << endl;
          cout << "b: " << b << endl;}();

    // capture all by reference except a
    [&, a](){b=10;
             cout << "a: " << a << endl;
             cout << "b: " << b << endl;}();

    // Capture a by value but using mutable
    [a]() mutable {
        a = 2;
        cout << "a: " << a << endl;
    }();

    cout << "a: " << a << endl; // mutable only change a copy of a in local scope, outside of scope a remain 

    LambdaCapturingTest test;
    test.run();
    return 0;   
}
```