/**
 * @file ObjectSlicingandPolymorphism.hpp
 * @author your name (you@domain.com)
 * @brief 
 * 
 * @ref https://cplusplus.com/doc/tutorial/inheritance/ 
 * @ref https://cplusplus.com/doc/tutorial/polymorphism/
 * @ref https://www.geeksforgeeks.org/object-slicing-in-c/
 * 
 * @version 0.1
 * @date 2023-05-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef OBJECTSLICINGANDPOLYMORPHISM_H_
#define OBJECTSLICINGANDPOLYMORPHISM_H_

#include <iostream>

using namespace std;

class Parent // base class
{
private:
    int a;
public:
    Parent();

    Parent(const Parent &other);

    virtual void print(); // virtual will create a pointer table so derived class can look up. It mean this function can be redefine by derived class
};

// derived class inheriated from base class, derived class conatain both member of base class and derived class
// the keyword public denote the most accessible level so the child class will inherited all the member they have in the base class
// In principle, a publicly derived class inherits access to every member of a base class except:
//    its constructors and its destructor
//    its assignment operator members (operator=)
//    its friends
//    its private members
class Child : public Parent 
{
private:
    int b;
public:
    virtual void print();
};

#endif