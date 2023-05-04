#ifndef COMPLEXNUMBER_H_
#define COMPLEXNUMBER_H_

#include <iostream>

using namespace std;

namespace my_complex
{

class Complex
{
private:
    double real;
    double imaginary;
public:
    Complex();
    Complex(double real, double imaginary);
    Complex(const Complex &other);

    const Complex & operator=(const Complex &other);
    
    double getReal() const { return real; }
    double getImaginary() const { return imaginary; }

    const Complex & operator+(const Complex &c);
    const Complex & operator+(double r);
    const bool operator==(const Complex &c);
};

ostream &operator<<(ostream &out, const Complex &c);
} /*my_complex*/
#endif