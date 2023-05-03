// #include "TestException/TestException.hpp"
// #include "Files/Files.hpp"
#include "OverloadingOperator/ComplexNumber.hpp"

using namespace std;
using namespace my_complex;

int main()
{ 
    Complex c1(3,4);
    Complex c2(8,9);
    Complex c3 = c2;
    Complex c4;
    c4 = c1 + c2;
    cout << c4  << endl;
    cout << (c1==c2) << endl;
    cout << c1 + 5 << endl;

    return 0;   
}
