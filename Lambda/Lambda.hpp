/**
 * @file Lamda.hpp
 * @author your name (you@domain.com)
 * @brief 
 * 
 * @req https://learn.microsoft.com/en-us/cpp/cpp/lambda-expressions-in-cpp?view=msvc-170
 * @version 0.1
 * @date 2023-05-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef LAMDA_H_
#define LAMDA_H_

#include <iostream>

using namespace std;

namespace Lambda_p
{
/**
*   @brief 
*   Define lambda in header will get error multiple define
*   Because lambda is anonymous function that definition is
*       not bond to an identifier.
*   @req https://en.wikipedia.org/wiki/Anonymous_function
*/
// auto p_Lambda_HW = [] () { cout << "Hello From Lamda" << endl; };

void RunPrint(void (*pFunc)());
void Greet( void (*pFunc)(string) );
}
#endif