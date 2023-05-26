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

/**
 * @brief AUTOSAR_RS_CPP14Guidelines.pdf - Rule A18-1-2: the vector<bool> specialization shall not be used
 * 
 */
class TestVectorBoolType
{
public:
    TestVectorBoolType();
    void print();
private:
    // For space efficient, it does not necessarily store its elements as a contiguous array => AUTOSAR warning
    vector<bool> a;
    bool *pt;
};

#endif