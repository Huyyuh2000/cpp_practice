/**
 * @file Functors.hpp
 * @author your name (you@domain.com)
 * @brief Functor is objects that use () in the manner of function
 *        To make functor use operator()(), the first () is overide (), () is passing parameter
 * @version 0.1
 * @date 2023-05-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef FUNCTOR
#define FUNCTOR

#include <iostream>

using namespace std;

struct FunctorTest
{
    virtual bool operator()(string &text) =0;
};

struct MatchText : public FunctorTest
{
    virtual bool operator()(string &text);
};

void check(string text, MatchText &test);

#endif