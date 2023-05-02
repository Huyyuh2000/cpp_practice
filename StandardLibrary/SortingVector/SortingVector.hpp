/**
 * @file SortingVector.hpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef SORTINGVECTOR_H_
#define SORTINGVECTOR_H_

#include <iostream>
#include <vector>
#include <algorithm>    // std::sort

using namespace std;

class TestSorting
{
private:
    int id;
    string name;
public:
    TestSorting();
    TestSorting(int id, string name);
    void Print();

    // bool operator < (const TestSorting& other) const; // Sort using operator method

    // sort using function outside class, using friend to access private variable of class
    friend bool SortFunction(const TestSorting& a, const TestSorting& b);
};

bool SortFunction(const TestSorting& a, const TestSorting& b);

class SortingVector
{
public:
    SortingVector();
    void Sorting();
    void displayAllElement();
private:
    vector<TestSorting> tests;
};
#endif