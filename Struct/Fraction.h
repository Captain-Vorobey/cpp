#ifndef FRACTION_H_INCLUDED
#define FRACTION_H_INCLUDED
#include <stdexcept>
#include "algorithms.h"

class Fraction
{
private:
    int m_num;
    int m_denum;
public:
    Fraction();
    Fraction(int numerator, int denumerator);
    Fraction(const Fraction& that);
    void print();
    void set_num(int num);
    void set_denum(int denum);
    void reverse();
    Fraction operator*(const Fraction& that);
    Fraction operator/(const Fraction& that);
    Fraction operator+(const Fraction& that);
    bool operator==(const Fraction& that);
    bool operator!=(const Fraction& that);
    bool operator>(const Fraction& that);
    bool operator<(const Fraction& that);
    bool operator>=(const Fraction& that);
    bool operator<=(const Fraction& that);
private:
    void normalize();
    int calc_num(int num,int denum, int common_denum);
};

Fraction::Fraction(/* Fraction* this */)
{

    std::cout << "Fraction()" <<std::endl;
};

Fraction::Fraction(/* Fraction* this */int numerator, int denumerator)
{
    set_denum(denumerator);
    set_num(numerator);
    std::cout << "Fraction(int numerator, int denumerator)" <<std::endl;
    this->normalize();
}

Fraction::Fraction(/* Fraction* this */const Fraction& that)
{
    this->m_num = that.m_num;
    this->m_denum = that.m_denum;
    std::cout << "Fraction(const Fraction& that)" <<std::endl;
}

void Fraction::print(/* Fraction* this */)
{
    if(m_num == m_denum || m_denum == 1)
    {
        std::cout << m_num <<std::endl;
    }
    else
    {
        std::cout << m_num << "/" << m_denum <<std::endl;
    }
}

void Fraction::set_num(/* Fraction* this */int num)
{
    //(*this).m_num = num;
    this->m_num = num;

}

void Fraction::set_denum(/* Fraction* this */int denum)
{
    if(denum == 0)
    {
        throw std::invalid_argument("zero can't to be denum");
    }
    m_denum = denum;
}

void Fraction::reverse(/* Fraction* this */ )
{
    std::swap(this->m_num, this->m_denum);
}
Fraction Fraction::operator*(/* Fraction* this */const Fraction& that)
{
    Fraction result;
    result.m_num = (*this).m_num * that.m_num;
    result.m_denum = (*this).m_denum * that.m_denum;
    std::cout << "Fraction operator*(const Fraction& that)" <<std::endl;
    result.normalize();
    return result;
}

Fraction Fraction::operator/(/* Fraction* this */ const Fraction& that)
{
    Fraction result;
    result.m_num = (*this).m_num * that.m_denum;
    result.m_denum = (*this).m_denum * that.m_num;
    std::cout << "Fraction operator*(const Fraction& that)" <<std::endl;
    result.normalize();
    return result;
}

Fraction Fraction::operator+(/* Fraction* this */ const Fraction& that)
{
    int common_denum = stu::lcm((*this).m_denum, that.m_denum );
    Fraction result;
    //result.m_num = this->m_num * (common_denum / this->m_denum) + that.m_num * (common_denum / that.m_denum);
    result.m_num = calc_num(this->m_num, this->m_denum, common_denum) + calc_num(that.m_num, that.m_denum, common_denum);
    result.m_denum = common_denum;
    result.normalize();
    return result;
}

bool Fraction::operator==(/* Fraction* this */ const Fraction& that)
{
     int common_denum = stu::lcm((*this).m_denum, that.m_denum );
     //return this->m_num * (common_denum / this-> m_denum ) == that.m_num * (common_denum / that.m_denum);
     return calc_num(this->m_num, this->m_denum, common_denum) == calc_num(that.m_num, that.m_denum, common_denum);
}

bool Fraction::operator!=(/* Fraction* this */ const Fraction& that)
{
     return !(*this == that);
}

bool Fraction::operator>(/* Fraction* this */ const Fraction& that)
{
    int common_denum = stu::lcm((*this).m_denum, that.m_denum );
    return calc_num(this->m_num, this->m_denum, common_denum) > calc_num(that.m_num, that.m_denum, common_denum);
}

bool Fraction::operator<(/* Fraction* this */ const Fraction& that)
{
    int common_denum = stu::lcm((*this).m_denum, that.m_denum );
    return calc_num(this->m_num, this->m_denum, common_denum) < calc_num(that.m_num, that.m_denum, common_denum);
}

bool Fraction::operator>=(/* Fraction* this */ const Fraction& that)
{
     int common_denum = stu::lcm((*this).m_denum, that.m_denum );
    return calc_num(this->m_num, this->m_denum, common_denum) >= calc_num(that.m_num, that.m_denum, common_denum);
}

bool Fraction::operator<=(/* Fraction* this */ const Fraction& that)
{
     int common_denum = stu::lcm((*this).m_denum, that.m_denum );
    return calc_num(this->m_num, this->m_denum, common_denum) <= calc_num(that.m_num, that.m_denum, common_denum);
}

void Fraction::normalize()
{
    int gcd_ = stu::gcd(m_num, m_denum);
    m_num /= gcd_;
    m_denum /= gcd_;
}

int Fraction::calc_num(int num, int denum, int common_denum)
    {
        return num * (common_denum / denum ) ;
    };


#endif // FRACTION_H_INCLUDED
