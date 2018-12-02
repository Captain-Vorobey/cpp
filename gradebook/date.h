#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

enum Month{Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
struct Date
{
    Month month;
    unsigned int year;
    unsigned int day;
    Date(){};
    Date(unsigned int day_,Month month_,unsigned int year_)
    {
        day = day_;
        month = month_;
        year = year_;


    }
    to_string()
    {
        std::string result;
        result.push_back(int_to_string(day));
        result.push_back("/");
    }

};

bool operator>(Date a, Date b)
{
    if(a.year == b.year)
    {
        if(a.month == b.month)
        {
            return a.day > b.day;
        }
        return a.month > b.month;
    }
    return a.year > b.year;
}

bool operator<(Date a, Date b)
{
    if(a.year == b.year)
    {
        if(a.month == b.month)
        {
            return a.day < b.day;
        }
        return a.month < b.month;
    }
    return a.year < b.year;
}

bool operator==(Date a, Date b)
{
    return a.year == b.year && a.month == b.month && a.day == b.day;
}

#endif // DATE_H_INCLUDED
