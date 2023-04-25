/**
 * Vector is a container to store the array
 * Unlike array, vector size can change dynamically
 * Vector containers may allocate some extra storage to accommodate for possible growth
 * 
 * Therefor, when comparing with array, vector contain more memory in exchange for the ability of growth dynamically and manange storage
 */

#ifndef VECTOR_H_
#define VECTOR_H_

#include <iostream>
#include <vector>

using namespace std;




/**
 * @brief 
 * 
 */
class VECTOR_U
{
public:
    void VectorBasic();
    void VectorAndMemmory();
private:
    vector<string> strings;
};

#endif