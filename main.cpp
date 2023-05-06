// #include "TestException/TestException.hpp"
// #include "Files/Files.hpp"
#include "TemplateClasses/TemplateClasses.hpp"

using namespace std;

int main()
{ 
    TemplateTest<int> Test(3);
    Test.Print();

    Print<string>("Hello");
    Print(23);
    Print<>(15);
    return 0;   
}
