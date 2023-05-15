- Copy this to main to have a look
```C++
#include "NestedTemplateClasses/NestedTemplateClasses.hpp"

using namespace std;
using namespace NestedTemplateClasses;

int main()
{ 
    RingBuffer<string> textRing(5);

    textRing.Add("One");
    textRing.Add("Two");
    textRing.Add("Three");
    textRing.Add("Four");
    textRing.Add("Five");
    textRing.Add("Six");

    for (size_t i=0; i<textRing.size(); i++)
    {
        cout << textRing.get(i) << endl;
    }

    // C++ 98 style
    for (RingBuffer<string>::Iterator it=textRing.begin(); it!=textRing.end(); it++)
    {
        cout << *it << endl;
    }

    // C++ 11 style
    for (auto text : textRing)
    {
        cout << text << endl;
    }
    return 0;   
}
```