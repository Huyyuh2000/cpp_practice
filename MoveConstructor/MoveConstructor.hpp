/**
 * @file MoveConstructor.hpp
 * @author your name (you@domain.com)
 * @brief 
 * 
 * @req https://en.cppreference.com/w/cpp/language/move_constructor
 * @req https://en.cppreference.com/w/cpp/language/move_assignment
 * @version 0.1
 * @date 2023-05-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef MOVECONSTRUCTOR_H_
#define MOVECONSTRUCTOR_H_

#include <iostream>
#include <vector>

using namespace std;

namespace MoveConstructor
{
class Test
{
private:
    int _size;
    string *_buffer{nullptr};
public:
    Test();

    ~Test();

    Test(int size);

    // Copy Constructor
    Test(const Test &other);

    // Move Constructor
    Test(Test &&other);

    // Move assignment
    Test &operator=(Test &&other);

    Test &operator=(const Test &other);

    friend ostream &operator<<(ostream &out, const Test &test);
};

ostream &operator<<(ostream &out, const Test &test);

Test getTest();
}

#endif