#include "Functors.hpp"

bool MatchText::operator()(string &text)
{
    return text == "Huy";
}

void check(string text, MatchText &test)
{
    if (test(text))
    {
        cout << "Text is: " << "Huy" << endl;
    }
    else
    {
        cout << "Text is not: " << "Huy" << endl;
    }
}