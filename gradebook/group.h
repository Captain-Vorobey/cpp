#ifndef GROUP_H_INCLUDED
#define GROUP_H_INCLUDED

enum Units{Poit,Law,Econ,Bank,Buh};
struct Group
{
    Units unit;
    int number;
    Group(){};
    Group(Units unit_,int number_)
    {
        unit = unit_;
        number = number_;
    }
    void print()
    {
        switch(unit)
        {
            case Units::Poit: std::cout << "T - " << number <<std::endl;
            break;
            case Units::Law: std::cout << "P - " << number <<std::endl;
            break;
            case Units::Econ: std::cout << "E - " << number <<std::endl;
            break;
            case Units::Bank: std::cout << "D - " << number <<std::endl;
            break;
            case Units::Buh: std::cout << "B - " << number <<std::endl;
            break;
        }
    }
};

#endif // GROUP_H_INCLUDED
