/**
 * @file Maps.hpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef MAPS_H
#define MAPS_H

#include <iostream>
#include <map>
#include <string>

using namespace std;

class PersonMap
{
private:
    int age;
    string name;
public:
    // default contructor
    PersonMap();

    // Copy contructor
    PersonMap(const PersonMap &other);

    PersonMap(int age, string name);

    void Print() const;

    bool operator < (const PersonMap &other) const; 
};

class TestMapsClass
{
public:
    // Contructor
    TestMapsClass();

    void PrintAllElement();
    bool isInMap(string Name);
    void addMemberUsingPair();


private:
    map<string, int> ages;
};


class TestMapClass_CustomObjectAsMapsValue
{
public:
    TestMapClass_CustomObjectAsMapsValue();
    void PrintAllElement();
private:
    map<int, PersonMap> Persons;
};

class TestMapClass_CustomObjectAsMapsKey
{
public:
    TestMapClass_CustomObjectAsMapsKey();
    void PrintAllElement();
private:
    map<PersonMap, int> Persons;
};
#endif