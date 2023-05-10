/**
 * @file AbstractClasses.hpp
 * @author your name (you@domain.com)
 * @brief In real word, base class might indicate
 *        the most common of derived class. It 
 *        should contain command information of derived
 *        class which cannot define specificaly in base class.
 * @version 0.1
 * @date 2023-05-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef ABSTRACTCLASSES_H_
#define ABSTRACTCLASSES_H_

#include <iostream>

using namespace std;

// This is abstract class, cannot have constructor
class Animal
{
public:
    virtual void run() = 0;
    virtual void speak() = 0; // this is pure virtual function
};


// Dog only implement speak but not all in abstract class Animal so Dog also abstract class
class Dog : public Animal
{
public:
    virtual void speak();
};

// concrete class
class Labrador : public Dog
{
public:
    virtual void run();
};

void AbstractClasses_test(Animal &animal);
#endif