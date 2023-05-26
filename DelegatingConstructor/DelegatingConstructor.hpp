/**
 * @file DelegatingConstructor.hpp
 * @author your name (you@domain.com)
 * @brief 
 * @ req  https://learn.microsoft.com/en-us/cpp/cpp/delegating-constructors?view=msvc-170
 * @version 0.1
 * @date 2023-05-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef DELEGATINGCONSTRUCTOR_H_
#define DELEGATINGCONSTRUCTOR_H_

#include <iostream>

using namespace std;

namespace DelegatingConstructor
{
class Car
{
private:
    int speed = 5;
    string type = "Normal";
public:
    /**
     * @brief Construct a new Car object
     *        C++ 11 allow call other type of contructor in class in contructor
     *        C++ 98 not allow
     */
    Car() : Car("Ferrari") // This is no longer default contructor
    {
        cout << "No parameter parent contructor" << endl;
    }

    Car(string type)
    {
        this->type = type;
        cout << "Parameter parent contructor" << endl;
    }

    void print();
};

class Ferrari : public Car
{
public:
    Ferrari() = default;
};
}

#endif