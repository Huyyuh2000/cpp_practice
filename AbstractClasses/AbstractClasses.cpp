#include "AbstractClasses.hpp"

void Dog::speak()
{
    cout << "Gau Gau" << endl;
}

void Labrador::run()
{
    cout << "Labrador is running" << endl;
}

void AbstractClasses_test(Animal &animal)
{
    animal.run();
}