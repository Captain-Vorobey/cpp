#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include "date.h"

struct Person
{
    std::string name;
    std::string surename;
    Date birthday;
    Person() {};
    Person(std::string n, std::string s, Date a);
    void print();
};

Person::Person(std::string n, std::string s, Date a)
{
    name = n;
    surename = s;
    birthday = a;
}

void Person::print()
{
    std::cout << name << " " << surename <<std::endl;
}

#endif // PERSON_H_INCLUDED
