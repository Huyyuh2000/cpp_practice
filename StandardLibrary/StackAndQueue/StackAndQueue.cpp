#include "StackAndQueue.hpp"

Test::Test(string name) : name(name) {}

/**
 * @brief Destroy the Test:: Test object
 * @details uncomment to check the comment in line 22
 * 
 */
Test::~Test() 
{
    // cout << "Object detroyed" << endl;
}

void Test::print()
{
    cout << name << endl;
}

TestStackClass::TestStackClass()
{
    /**
     * @details whenever access object within collection objects. Usually, standard template classes return 
     *          the reference of the object.
     * 
     */

    testStack.push(Test("Huy")); // Object Test("Huy") will be create. This will copy the object Test("Huy") into stack<Test> testStack. Then the object Test("Huy") will be detroyed.
    testStack.push(Test("Hoa"));
    testStack.push(Test("Tung"));
    testStack.push(Test("Dung"));
}

void TestStackClass::StackBasic()
{
    /* This is the so wrong code. Object is destroyed
    *
    Test &test1 = testStack.top();
    testStack.pop();
    test1.print(); // Reference refers to destroyed object
    */

    Test test1 = testStack.top();
    test1.print();

    testStack.pop();

    Test test2 = testStack.top();
    test2.print();
}

void TestStackClass::displayAllInStack()
{
    while(testStack.size() != 0)
    {
        Test test = testStack.top();
        test.print();
        testStack.pop();
    }
}

TestQueueClass::TestQueueClass()
{
    /**
     * @details whenever access object within collection objects. Usually, standard template classes return 
     *          the reference of the object.
     * 
     */

    testQueue.push(Test("Huy")); // Object Test("Huy") will be create. This will copy the object Test("Huy") into Queue<Test> testQueue. Then the object Test("Huy") will be detroyed.
    testQueue.push(Test("Hoa"));
    testQueue.push(Test("Tung"));
    testQueue.push(Test("Dung"));
}

void TestQueueClass::QueueBasic()
{
    /* This is the so wrong code. Object is destroyed
    *
    Test &test1 = testQueue.top();
    testQueue.pop();
    test1.print(); // Reference refers to destroyed object
    */

    Test test1 = testQueue.front();
    test1.print();

    testQueue.pop();

    Test test2 = testQueue.front();
    test2.print();
}

void TestQueueClass::displayAllInQueue()
{
    while(testQueue.size() != 0)
    {
        Test test = testQueue.front();
        test.print();
        testQueue.pop();
    }
}