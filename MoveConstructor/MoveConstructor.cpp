#include "MoveConstructor.hpp"

namespace MoveConstructor
{
Test::Test()
{
    cout << "Default Constructor" << endl;
    _size = 1;
    _buffer = new string[_size];
}

Test::~Test()
{
    cout << "Delete Constructor" << endl;
    delete [] _buffer;
}

Test::Test(int size)
{
    _size = size;
    _buffer = new string[_size];
}

Test::Test(Test &&other)
{
    cout << "Move Constructor is running" << endl;
    _buffer = other._buffer;
    other._buffer = nullptr;
}


Test::Test(const Test &other)
{
    cout << "Copy constructor is running" << endl;
    _size = other._size;
    _buffer = new string[other._size];
    memcpy(_buffer, other._buffer, _size*sizeof(string));
}


Test &Test::operator=(const Test &other)
{
    cout << "Assign constructor is running" << endl;
    _size = other._size;
    _buffer = new string[other._size];
    memcpy(_buffer, other._buffer, _size*sizeof(string));

    return *this;   
}

/**
 * @brief Move assignment running whenever an object appear in left and right is rvalue
 * 
 * @param other 
 * @return Test 
 */
Test &Test::operator=(Test &&other)
{
    cout << "Move assignment is running" << endl;
    delete [] _buffer;
    _buffer = other._buffer;
    other._buffer = nullptr; // stop other delete buffer
    _size = other._size;

    return *this;
}


ostream &operator<<(ostream &out, const Test &test)
{
    out << "Hello from Test" << endl;
    return out;
}

Test getTest()
{
    return Test();
}
}