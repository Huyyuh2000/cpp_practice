/**
 * @file RandLvalue.hpp
 * @author your name (you@domain.com)
 * @brief 
 *  @req https://www.artima.com/articles/a-brief-introduction-to-rvalue-references
 * @version 0.1
 * @date 2023-05-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef RANDLVALUE
#define RANDLVALUE

#include <iostream>

using namespace std;

namespace RandLvalue
{
class Test
{
public:
    Test();

    friend ostream &operator<<(ostream &out, const Test &test);
private:
    int a;
    string b;
};

ostream &operator<<(ostream &out, const Test &test);

Test getTest();

void TestFunc(int &&Rvalue,int &Lvalue);
}

#endif