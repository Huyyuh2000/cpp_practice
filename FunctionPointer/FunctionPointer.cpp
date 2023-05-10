#include "FunctionPointer.hpp"

Text::Text()
{
    texts.push_back("one");
    texts.push_back("two");
    texts.push_back("three");
    texts.push_back("four");
    texts.push_back("five");
    texts.push_back("six");
    texts.push_back("seven");
    texts.push_back("eight");
    texts.push_back("nine");
    texts.push_back("ten");
}

bool TextLength(string text, int length)
{
    return text.size() == length;
}

int Text::CountString(int length, 
                      bool (*TextLength)(string, int))
{
    int count = 0;
    for (vector<string>::iterator it = texts.begin(); 
         it != texts.end(); 
         it++)
    {
        if (TextLength(*it, length))
        {
            count+=1;
        }
        else{}
    }

    return count;
}