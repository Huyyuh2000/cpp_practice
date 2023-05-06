/**
 * @file TemplateClasses.hpp
 * @author your name (you@domain.com)
 * @brief In c++, template classes should be decleare and define in the same header file
 *        So the compiler can see and compile 
 * @version 0.1
 * @date 2023-05-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef TEMPLATECLASSES_H_
#define TEMPLATECLASSES_H_

#include <iostream>

using namespace std;

template <class T>
class TemplateTest
{
private:
    T obj;

public:
    TemplateTest(T obj)
    {
        this->obj = obj;
    }

    void Print()
    {
        cout << obj << endl;
    }
};

template <typename T>
void Print(T obj)
{
    cout << "template function: " << obj << endl;
}

void Print(int n)
{
    cout << "non-template function: " << n << endl;
}



#endif