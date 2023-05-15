/**
 * @file NestedTemplateClasses.hpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef NESTEDTEMPLATECLASSES_H_
#define NESTEDTEMPLATECLASSES_H_

#include <iostream>

using namespace std;

namespace NestedTemplateClasses
{
/**
 * @brief 
 * 
 * @tparam T 
 */
template<class T>
class RingBuffer
{
public:
    class Iterator;

public:
    RingBuffer(unsigned int s) : _size(s), _index(0), value(NULL)
    {
        value = new T[_size];
    }

    ~RingBuffer()
    {
        delete [] value;
    }

    void Add(T e)
    {
        if (_index <= _size-1)
        {
            value[_index] = e;
            _index++;
        }
        else
        {
            _index = 0;
            value[_index] = e;
        }
    }

    unsigned int size()
    {
        return _size;
    }

    T & get(unsigned int i)
    {
        return value[i];
    }

    Iterator begin()
    {
        return Iterator(0, *this);
    }

    Iterator end()
    {
        return Iterator(_size, *this);
    }


private:
    unsigned int _size;
    unsigned int _index;
    T *value;
};

/**
 * @brief This is nested template class, the main purpose is make class RingBuffer iterable,
 *        Class in class should be define outside class for reading purpose
 * 
 * @tparam T 
 */
template<class T>
class RingBuffer<T>::Iterator
{
private:
    unsigned int _index;
    RingBuffer &_RingBuffer;

public:
    Iterator(unsigned int index, RingBuffer &p_RingBuffer) : _index(index) , _RingBuffer(p_RingBuffer)
    {

    }

    T &operator*()
    {
        return _RingBuffer.get(_index);
    }

    bool operator!=(const Iterator &other) const
    {
        if (_index != other._index)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    Iterator &operator++(int)
    {
        _index++;
        return *this;
    }

    Iterator &operator++()
    {
        _index++;
        return *this;
    }

    void print()
    {
        cout << "Hello from iterator" << endl;
    }
};
}

#endif