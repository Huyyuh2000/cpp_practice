#include "OverloadingOperator.hpp"

OperatorTest::OperatorTest() : id(0), name("") {}

OperatorTest::OperatorTest(int id, string name) : id(id), name(name) {}

void OperatorTest::Print()
{
    cout << id << ": " << name << endl;
}

OperatorTest::OperatorTest(const OperatorTest &other)
{
    // cout << "Copy constructor is running" << endl;
    name = other.name;
    id = other.id; 
}

const OperatorTest & OperatorTest::operator=(const OperatorTest &other)
{
    // cout << "Assigning is running" << endl;
    name = other.name;
    id = other.id;
    return *this;
}

ostream & operator<<(ostream &out, const OperatorTest &Test)
{
    out << Test.id << ": " << Test.name;
    return out;
}

TestOperatorClass::TestOperatorClass() 
{
    Test1 = OperatorTest(1, "Huy");
}

void TestOperatorClass::AssignmentOperator()
{
    Test2 = Test1;
    cout << Test1 << endl << Test2 << endl;

    // Copy Constructor
    OperatorTest Test3 = Test1; // If declear and assign, c++ will use copy constructor not assingment operator
    Test3.Print();
    cout << endl;
    cout << Test3 << endl;
}