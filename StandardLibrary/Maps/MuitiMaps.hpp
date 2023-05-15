/**
 * @file MuitiMaps.hpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */

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