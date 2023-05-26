/**
 * @file StandardFunctionType.hpp
 * @author your name (you@domain.com)
 * @brief
 * 
 * @req https://cplusplus.com/reference/functional/function/?kw=function
 * @version 0.1
 * @date 2023-05-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef STANDARDFUNCTIONTYPE_H_
#define STANDARDFUNCTIONTYPE_H_

#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;

namespace StandardFunctionType
{
class Check
{
private:

public:
    bool operator()(string &test);
};

bool CheckFunc(string &test);

void run(function<bool(string&)> check);
}

#endif