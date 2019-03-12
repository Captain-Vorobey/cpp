#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

struct Person
{
    std::string first_name;
    std::string second_name;
    int age;
    Person() = default;
    Person(std::string first_name_, std::string second_name_, int age_)
    {
        first_name = first_name_;
        second_name = second_name_;
        age = age_;
    }
};




#endif // PERSON_H_INCLUDED
