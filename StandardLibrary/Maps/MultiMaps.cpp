#include "MuitiMaps.hpp"

TestMultiMapsClass::TestMultiMapsClass()
{
    lookup.insert(make_pair(23, "Huy"));
    lookup.insert(make_pair(23, "An")); // while map overwritten the value if same key, multimap will have 2 element with same key
    lookup.insert(make_pair(33, "Tung"));
    lookup.insert(make_pair(27, "Nguyen"));
}

void TestMultiMapsClass::PrintAllElement()
{
    for (multimap<int, string>::iterator it = lookup.begin();
         it != lookup.end();
         it++)
    {
        cout << it->first << ": " << it->second << endl;
    }
}

void TestMultiMapsClass::displayAndArrangeElement(int key)
{
    pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its = 
                            lookup.equal_range(key);

    for (multimap<int, string>::iterator it = its.first;
        it != its.second;
        it++)
    {
        cout << it->first << ": " << it->second << endl;
    }
}