/**
 * @file Auto.hpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef AUTO_H_
#define AUTO_H_

#include <iostream>

using namespace std;

template<class T, class S>
auto add(T var1, S var2) -> decltype(var1 + var2)
{
    return var1 + var2;
}

int get();

auto AutoFunctionTest() -> decltype(get());


#endif