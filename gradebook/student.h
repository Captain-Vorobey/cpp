#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include "person.h"
#include "group.h"

struct Student:Person
{
    Group group;
    Student()=default;
    Student(Person person,Group group_)
    {
        name = person.name;
        surename = person.surename;
        birthday = person.birthday;
        group = group_;
    }
    void print2()
    {
        std::cout << name << " " << surename << " " <<std::endl;
    }

};
