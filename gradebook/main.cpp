#include <iostream>
#include "person.h"
#include "student.h"
#include "date.h"
#include "group.h"
#include "util.h"

int main()
{
    Student a(Person("Suprunov","Egor",Date(22,Month::Jun,2001)),Group(Units::Poit,795));

    a.name = "vlad";
    Date b (18, Month::Oct,2018);
    Date c (19, Month::Oct,2018);
    Group d(Units::Poit,795);
    d.print();
    std::string res = to_string(145);
    std::cout << res << std::endl;

    return 0;
}
