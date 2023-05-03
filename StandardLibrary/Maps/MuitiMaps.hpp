#ifndef MULTIMAPS_H_
#define MULTIMAPS_H_

#include <iostream>
#include <map>

using namespace std;

class TestMultiMapsClass
{
private:
    multimap<int, string> lookup;
public:
    TestMultiMapsClass();
    void PrintAllElement();
    void displayAndArrangeElement(int key);
};

#endif