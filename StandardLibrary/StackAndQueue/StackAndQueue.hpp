/**
 * @file StackAndQueue.hpp
 * @author your name (you@domain.com)
 * @brief Stack is LIFO buffer
 *        Queue is FIFO  buffer
 * 
 * @ref https://cplusplus.com/reference/stack/stack/
 * @version 0.1
 * @date 2023-05-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef STACKANDQUEUE_H_
#define STACKANDQUEUE_H_

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Test
{
private:
    string name;
public:
    Test(string name);

    ~Test();

    void print();
};


class TestStackClass
{
private:
    stack<Test> testStack;
public:
    TestStackClass();
    void StackBasic();
    void displayAllInStack();
};

class TestQueueClass
{
private:
    queue<Test> testQueue;
public:
    TestQueueClass();
    void QueueBasic();
    void displayAllInQueue();
};

#endif