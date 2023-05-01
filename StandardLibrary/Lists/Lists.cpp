#include "Lists.hpp"

/**
 * @brief This function run basic syntax of list: push, pop, insert, erase,
 *        to have a overview how list work
 * 
 */
void TestListClass::ListBasic()
{
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_front(0);

    list<int>::iterator it = numbers.begin();
    cout << "Firt element of the list: " << *it << endl;
    it++;
    cout << "Second element of the list: " << *it << endl;
    it = numbers.insert(it, 100);
    cout << "Insert 100 into list at it: "<< *it << endl;

    // Delete 100 out of the list
    /*
    list<int>::iterator erase_it = numbers.begin();
    erase_it++;
    numbers.erase(erase_it);
    cout << "Delete 100 element: " << *erase_it << endl;
    */ // Don't code like above because erase_it is still a reference to 100 which might not be reuse or erease
    list<int>::iterator erase_it = numbers.begin();
    erase_it++;
    erase_it = numbers.erase(erase_it);
    cout << "Delete 100 element: " << *erase_it << endl;

    cout << "Run iterator through list: " << endl;
    for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++) // cannot use it+=2, can only use ++,--
    {
        cout << *it <<endl;
    }

    for (list<int>::iterator it = numbers.begin(); it != numbers.end();) // cannot use it+=2, can only use ++,--
    {
        if (*it == 2)
        {
            numbers.insert(it,1234);
        }

        if (*it == 1)
        {
            it = numbers.erase(it); // erase 1
        }
        else 
        {
            it++;
        }
    }
    
    cout << "Run iterator through list: " << endl;
    for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++) // cannot use it+=2, can only use ++,--
    {
        cout << *it <<endl;
    }
}