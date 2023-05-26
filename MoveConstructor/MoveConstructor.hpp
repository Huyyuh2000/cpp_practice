/**
 * @file MoveConstructor.hpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef MOVECONSTRUCTOR_H_
#define MOVECONSTRUCTOR_H_

#include <iostream>

using namespace std;

namespace MoveConstructor
{
class Test
{
private:
    int _size;
    string *_buffer;
public:
    Test();

    ~Test();

    Test(int size);

    // Copy Constructor
    Test(const Test &other);

    // Move Constructor
    Test(Test &&other);

    Test &operator=(const Test &other);

    friend ostream &operator<<(ostream &out, const Test &test);
};

ostream &operator<<(ostream &out, const Test &test);
}

#endif