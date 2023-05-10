/**
 * @file FunctionPointer.hpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef FUNCTIONPOINTER_H_
#define FUNCTIONPOINTER_H_

#include <iostream>
#include <vector>

using namespace std;

class Text
{
private:
    vector<string> texts;
public:
    Text();
    int CountString(int length,bool (*TextLength)(string, int));
};

bool TextLength(string text, int length);
#endif