#include "Vectors.hpp"

void TestVectorClass::VectorBasic()
{
    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");

    // iteration over vector 
    for (vector<string>::iterator it = strings.begin();
         it < strings.end(); it++)
    {
        cout << "Address of element in vector: " << &(*it) << " end element: " << *it << endl;
    }
}

/**
 * @brief Function to describe relation between number of member in vector and it's memory.
 * @details vector::capacity - Return size
 *          vector::size - Return size of allocated memory assign for vector
 *          -> Whenever size of vector (number of member) is larger than capacity,
 *              vector memory will be reassigned new memory and copy old member to new one.
 *              Note that memory expand in formula: new = 2*old
 *          --> When use vector need to aware about reallocated memory if keep adding element
 *              beyond vector capacity.
 */
void TestVectorClass::VectorAndMemmory()
{
    cout << numbers.size() << endl;
    cout << numbers.capacity() << endl;

    for (int i=0; i<100; i++)
    {
        numbers.push_back(i);
        if (i%10 == 0)
        {
            cout << "i: " << i << endl;
            cout << "size: " << numbers.size() << endl;
            cout << "capacity: "<< numbers.capacity() << endl;            
        }
    }

    cout << numbers.size() << endl;
    cout << numbers.capacity() << endl;
}

void TestVectorClass::TwoDimensionalVector()
{
    // Two dimensional 3x8 vector
    vector< vector<int> > grid(3, vector<int>(8, 0));

    grid[2].push_back(1);

    for (int row = 0; row < grid.size(); row++)
    {
        for (int col = 0; col < grid[row].size(); col++)
        {
            cout << grid[row][col] << flush;
        }

        cout << endl;
    }
}

TestVectorBoolType::TestVectorBoolType()
{
    a.push_back(true);
    a.push_back(false);
    a.push_back(true);
    a.push_back(false);
    a.push_back(true);

    /**
     * This is wrong since vector<bool> will initialize bit filed rather than
     * a byte to store value
     * 
     */
    // pt = &a[2];
}

void TestVectorBoolType::print()
{
    cout << a[2] << endl; // operator [] will return object of this class

    cout << endl;

    for (vector<bool>::iterator rf = a.begin(); rf!= a.end(); rf++)
    {
        cout << *rf << endl;
    }
}