#ifndef EXCEPTION
#define EXCEPTION

#include <iostream>
#include <string>
#include <exception>

using namespace std;

void basicException();

void standardExceptionFunc();

void somethingsMightGoWrong();

class TestMyException
{
public:
    void GoesWrong();
};

class standardException
{
public:
    standardException();
};

class MyException : public exception
{
public:
    virtual const char * what() const throw();
};
#endif