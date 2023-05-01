#include "Vectors.hpp"

void TestVectorClass::VectorBasic()
{
    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");

    // iteration over vector 
    for (vector<string>::iterator it = strings.begin();
         it < strings.end(); it++)
    {
        cout << "Address of element in vector: " << &(*it) << " end element: " << *it << endl;
    }

}