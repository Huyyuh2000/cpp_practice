/**
 * @file InitializationList.hpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef INITIALIZATIONLIST_H_
#define INITIALIZATIONLIST_H_

#include <iostream>

using namespace std;

namespace InitializationList
{
class Test
{
public:
    Test(initializer_list<string> texts);

    void print(initializer_list<string> texts);
    void print(initializer_list<int> numbers);
private:

};
}

#endif