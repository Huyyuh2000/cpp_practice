/**
 * @file Bind.hpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef BIND_H_
#define BIND_H_

#include <iostream>
#include <functional>

using namespace std;
using namespace std::placeholders;

namespace Bind
{
class Test
{
public:
    int add(int a, int b, int c);
};

int run(function<int(int, int)> func, int a, int b);


}

#endif