/*
 * Vector is a container to store the array
 * Unlike array, vector size can change dynamically
 * Vector containers may allocate some extra storage to accommodate for possible growth
 * 
 * Therefor, when comparing with array, vector contain more memory in exchange for the ability of growth dynamically and manange storage
 */

#ifndef VECTORS_H_
#define VECTORS_H_

#include <iostream>
#include <vector>

using namespace std;




/**
 * @brief 
 * 
 */
class TestVectorClass
{
public:
    void VectorBasic();
    void VectorAndMemmory();
    void TwoDimensionalVector();
private:
    vector<string> strings;
    vector<double> numbers;
};

#endif