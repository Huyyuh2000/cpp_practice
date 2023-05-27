/**
 * @file CastingInCplusplus.hpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef  CASTINGINCPLUSPLUS_H_
#define CASTINGINCPLUSPLUS_H_

#include <iostream>

using namespace std;

namespace CastingInCplusplus
{
class Parent
{
public:
    virtual void Print();
};

class Sister : public Parent 
{

};

class Brother : public Parent
{
};

void testStaticCast();
}

#endif