/**
 * @file PerfectForwarding.hpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef PERFECTFORWARDING_H_
#define PERFECTFORWARDING_H_

#include <iostream>

using namespace std;

namespace PerfectForwarding
{
class Test
{
private:

public:

};

void check(Test &test);
void check(Test &&test);

//When you combine rvalue references with function 
//templates you get an interesting interaction: if 
//the type of a function parameter is an rvalue 
//reference to a template type parameter then the type 
//parameter is deduce to be an lvalue reference 
//if an lvalue is passed, and a plain type otherwise
template<class T>
void call(T &&arg)
{
    check(forward<T>(arg));
}
}

#endif