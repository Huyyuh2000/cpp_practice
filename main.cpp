// #include "TestException/TestException.hpp"
// #include "Files/Files.hpp"
#include "OverloadingOperator/ComplexNumber.hpp"

using namespace std;
using namespace my_complex;

int main()
{ 
    Complex c1(3,4);
    cout << *c1 + Complex(-1,2) << endl;

    return 0;   
}
