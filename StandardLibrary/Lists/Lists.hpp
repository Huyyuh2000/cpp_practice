/**
 * @file List.hpp
 * @author your name (you@domain.com)
 * @brief This file contain example of list. The difference between list
 *        and vector is the method contain data. In memory, data is stack 
 *        to each while list contain a bunch of  node contains each element and those node
 *        are link to each pointer via pointe. So if you look at two node of the list
 *        they will have pointer to each other. This is called double-link list
 * @version 0.1
 * @date 2023-05-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef LISTS_H_
#define LISTS_H_

#include <iostream>
#include <list>

using namespace std;

class TestListClass
{
public:
    void ListBasic();
private:
    list<int> numbers;
};


#endif
