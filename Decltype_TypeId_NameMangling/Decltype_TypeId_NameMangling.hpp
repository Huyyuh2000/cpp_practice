/**
 * @file Decltype_TypeId_NameMangling.hpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef DECLTYPE_TYPEID_NAMEMANGLING_H_
#define DECLTYPE_TYPEID_NAMEMANGLING_H_

#include <iostream>
#include <typeinfo>

using namespace std;

typedef int Distance;

struct Dog
{
    uint8_t  speak;
    uint16_t speed;
};

class Animal
{
private:
    string  speak;
    uint16_t speed;
public:
    Animal();
    void print();
};

void test_Decltype_TypeId_NameMangling(Animal &c, Dog &s, Distance &t);

#endif