#include "Maps.hpp"

PersonMap::PersonMap() : age(0), name("") {}

PersonMap::PersonMap(const PersonMap &other)
{
    age = other.age;
    name = other.name;
    // cout << "Copy contructor running" << endl;
}

PersonMap::PersonMap(int age, string name) : age(age), name(name) {}

void PersonMap::Print() const 
{
    cout << name << ": " << age << endl;
}

/**
 * @brief Operator
 *        This must be create if using Custom Object as Map Key.
 *        Because Key of map will use < operator automatically.
 * @param [in]  PersonMap & 
 * @return true 
 * @return false 
 */
bool PersonMap::operator<(const PersonMap &other) const
{
    if (name == other.name)
    {
        return age < other.age;
    }
    else
    {
        return name < other.name;
    }
}

TestMapsClass::TestMapsClass()
{
    ages["Huy"] = 23;
    ages["Nguyen"] = 27;
    ages["Tung"] = 33;
}

/**
 * @brief This Function print all element of maps using iterator
 * 
 */
void TestMapsClass::PrintAllElement()
{
    for (map<string, int>::iterator it = ages.begin(); 
         it != ages.end(); 
         it++)
    {
        cout << it->first << ": " << it->second << endl;
    }
}

/**
 * @brief This function search if key Name in map or not
 * 
 * @param [in] Name 
 * @return TRUE - if key Name is in maps.
 *         FALSE - if key Name is not in maps
 */
bool TestMapsClass::isInMap(string Name)
{
    if (ages.find(Name) != ages.end())
    {
        cout << "Found " << Name << endl;
        return true;
    }
    else
    {
        cout << "Cannot found " << Name << endl;
        return false;
    }
}

/**
 * @brief This function insert new element into map using pair
 * @details Pair is particular case of tuple. This class couple together a pair of value.
 * @ref https://cplusplus.com/reference/utility/pair/
 */
void TestMapsClass::addMemberUsingPair()
{
    ages.insert(make_pair("Tan", 50));
}

TestMapClass_CustomObjectAsMapsValue::TestMapClass_CustomObjectAsMapsValue()
{
    Persons[1] = PersonMap(23, "Huy"); // Shallow copy
    Persons[11] = PersonMap(33, "Tung");
    Persons[53] = PersonMap(27, "Nguyen");

    Persons.insert(make_pair(19, PersonMap(21, "Nhu")));
    Persons.insert(make_pair(20, PersonMap(21, "Nam")));
}

void TestMapClass_CustomObjectAsMapsValue::PrintAllElement()
{
    for (map<int, PersonMap>::iterator it = Persons.begin();
         it != Persons.end();
         it++)
    {
        cout << it->first << ": " << flush;
        it->second.Print();
    }
}

TestMapClass_CustomObjectAsMapsKey::TestMapClass_CustomObjectAsMapsKey()
{
    Persons[PersonMap(23, "Huy")] = 1; // Shallow copy
    Persons[PersonMap(21, "Huy")] = 1; 
    Persons[PersonMap(33, "Tung")] = 2;
    Persons[PersonMap(27, "Nguyen")] = 3;
}

void TestMapClass_CustomObjectAsMapsKey::PrintAllElement()
{
    for (map<PersonMap, int>::iterator it = Persons.begin();
         it != Persons.end();
         it++)
    {
        cout << it->second << ": " << flush;
        it->first.Print();
    }
}