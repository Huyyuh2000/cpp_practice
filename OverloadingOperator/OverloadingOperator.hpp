#ifndef OVERLOADINGOPERATOR_H_
#define OVERLOADINGOPERATOR_H_

#include <iostream>

using namespace std;

class OperatorTest
{
public:
    OperatorTest();
    OperatorTest(int id, string name);
    OperatorTest(const OperatorTest &other);

    void Print();

    const OperatorTest & operator=(const OperatorTest &other);
    
    friend ostream & operator<<(ostream &out, const OperatorTest &Test);

private:
    int id;
    string name;
};

ostream & operator<<(ostream &out, const OperatorTest &Test);

class TestOperatorClass
{
private:
    TestOperatorClass();
    void AssignmentOperator();
public:
    OperatorTest Test1;
    OperatorTest Test2;
};

#endif