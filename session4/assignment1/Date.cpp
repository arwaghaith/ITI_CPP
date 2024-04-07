#include <iostream>
#include "Date.hpp"

Date::Date():Date(1,1,2000)
{
   
}
Date::Date(int day, int month, int year)
{
    this->day = day;
    this->month = month;
    this->year = year;
}

void Date::setDay(int day)
{
    this->day = day;
}
void Date::setMonth(int month)
{
    this->month = month;
}
void Date::setYear(int year)
{
    this->year = year;
}
int Date::getDay()
{
    return day;
}
int Date::getMonth()
{
    return month;
}
int Date::getYear()
{
    return year;
}
bool Date::isDateValid()
{
    if (month==2)
    {
        if (year%4==0)
        {
            if (day>0 && day<=29)
            {
                return true;
            }
        }
        else
        {
            if (day>0 && day<=28)
            {
                return true;
            }
        }
    }
    else if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
        if (day>0 && day<=31)
        {
            return true;
        }
    }
    else if (month==4 || month==6 || month==9 || month==11)
    {
        if (day>0 && day<=30)
        {
            return true;
        }
    }
    return false;
}