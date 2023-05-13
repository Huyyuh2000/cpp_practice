#include "Decltype_TypeId_NameMangling.hpp"

void test_Decltype_TypeId_NameMangling(Animal &c, Dog &s, Distance &t)
{
    string value;
    cout << typeid(value).name() << endl; // name mangling that allow c++ indicate does this belong to overload ore something
    cout << typeid(c).name() << endl;
    cout << typeid(s).name() << endl;
    cout << typeid(t).name() << endl;

    // decltype will create a objecct that have same type of object passing in, so need to care about var, reference or pointer
    decltype(value) name = "Huy";
    cout << name << endl;
}

Animal::Animal() : speak(""), speed(0) {}

void Animal::print()
{
    cout << "Speak: " << speak << endl;
    cout << "Speed: " << speed << endl;
}