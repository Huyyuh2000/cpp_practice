#include "ComplexNumber.hpp"

namespace my_complex
{
ostream &operator<<(ostream &out, const Complex &c)
{
    out << "(" << c.getReal() << "," << c.getImaginary() << ")";
    return out; 
}

Complex::Complex() : real(0), imaginary(0) {};

Complex::Complex(double real, double imaginary) : real(real), imaginary(imaginary) {};

Complex::Complex(const Complex &other)
{
    cout << "Copy Constructor is running" << endl;
    real = other.real;
    imaginary = other.imaginary;
}

const Complex & Complex::operator=(const Complex &other)
{
    cout << "Assignment operator is running" << endl;
    real = other.real;
    imaginary = other.imaginary;
    return *this;
}

// const Complex & Complex::operator+(const Complex &c)
// {
//     cout << "Plus overloading is running" << endl;
//     real = real + c.real;
//     imaginary = imaginary + c.real;
//     return *this;
// }

// const Complex & Complex::operator+(double r)
// {
//     cout << "Plus overloading is running" << endl;
//     real = real + r;
//     return *this;
// }

Complex  operator+(const Complex &c1, const Complex &c2)
{
    return Complex((c1.getReal()+c2.getReal()), (c1.getImaginary()+c2.getImaginary()));
}

Complex  operator+(double d, const Complex &c)
{
    return Complex((c.getReal()+d), c.getImaginary());
}

Complex  operator+(const Complex &c, double d)
{
    return Complex((c.getReal()+d), c.getImaginary());
}

Complex Complex::operator*() const
{
    return Complex(real, -imaginary);
}

const bool Complex::operator==(const Complex &c)
{
    if ((real == c.real) && (imaginary == c.imaginary))
    {
        cout << "True ";
        return true;
    }
    else
    {
        cout << "False ";
        return false;
    }
}

const bool Complex::operator!=(const Complex &c)
{
    if ((real != c.real) || (imaginary != c.imaginary))
    {
        return true;
    }
    else
    {
    return false;
    }
}
}
