#include "CastingInCplusplus.hpp"

namespace CastingInCplusplus
{
void Parent::Print()
{
    cout << "Hello from parent" << endl;
}

/**
 * @brief 
 * @req https://en.cppreference.com/w/cpp/language/static_cast
 * @req https://en.cppreference.com/w/cpp/language/dynamic_cast
 * @req https://en.cppreference.com/w/cpp/language/reinterpret_cast
 */
void testStaticCast()
{
    Parent p;
    Brother b;
    Sister s;

    Parent *pp = &b; // this cast is allow because of class polymorphism

#ifdef __GXX_RTTI
    // Instead using static_cast, dynamic cast can check run time, please check if your gnu anble rtti
    Brother *pb = dynamic_cast<Brother *>(pp); 

    if (pb == nullptr)
    {
        cout << "Some thing error with cast" << endl;
    }
    else
    {
        cout << pb << endl;
    }
#else
    // //downcasting, this could be dangerous if Brother have some function that Parent does not have, static_cast just compile check not run time check
    Brother *pb = static_cast<Brother *>(&p); 
    cout << pb << endl;
#endif

    Parent &&p1 = static_cast<Parent &&>(p); // cast from rvalue to rvalue reference
    p1.Print();

    // Reinterpret cast
    // It is purely a compile-time directive which instructs the compiler to treat expression as if it had the type new-type.
    // It is less checking than static_cast
    // In example, we cast two same level object (&brother to *sister) which will work with reinterpret_cast and static_cast
    Sister *ps = reinterpret_cast<Sister *>(pp);
    // For dynamic cast, it will get error
    // Sister *ps = dynamic_cast<Sister *>(pp);
    // if (pp == nullptr)
    // {
    //     cout << "Some thing error with cast" << endl;
    // }
    // else
    // {
    //     cout << pp << endl;
    // }
}
}