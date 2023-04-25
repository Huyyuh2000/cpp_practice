#include "TestException.hpp"

using namespace std;

/**
 * @brief 
 * 
 * @return const char* 
 */
const char * MyException::what() const throw()
{
    return "Something happend: ";
}

/**
 * @brief 
 * 
 */
void TestMyException::GoesWrong()
{
    throw MyException();
}

/**
 * @brief 
 * 
 */
void somethingsMightGoWrong()
{
        bool error1 = false;
        bool error2 = false;
        bool error3 = true;

    if (error1) 
    {
        throw 1;
    } // If error1 is true the program will stop here and catch the error1, to test, change error1 and error2 to true

    if (error2)
    {
        throw "Something went wrong";
    }

    if (error3)
    {
        throw string("Throwing a string object ");
    }
}

/**
 * @brief Construct a new standard Exception::standard Exception object
 * 
 */
standardException::standardException()
{
    char *pMemory = new char[99];
    delete[] pMemory; 
}

/**
 * @brief 
 * 
 */
void standardExceptionFunc()
{
    standardException test;
}

/**
 * @brief 
 * 
 */
void basicException()
{
        cout << "Hello World!!\n";

    try
    {
        somethingsMightGoWrong();
    } catch (int e)
    {
        if (e == 1)
        {
            cout << e << endl;
        }
    } catch (char const * e) 
    {
        cout << e << endl;
    } catch (string &e)
    {
        cout << "Catching object: " << e << endl;
    }
}