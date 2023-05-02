/**
 * @file Sets.hpp
 * @author your name (you@domain.com)
 * @brief Set is only store unique element
 * @version 0.1
 * @date 2023-05-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef SET_H_
#define SET_H_

#include <iostream>>
#include <set>

using namespace std;

class TestSetClass
{
public:
    TestSetClass();
    void displayAllElement();
    bool findElement(int number);
private:
    set<int> numbers;
};


#endif