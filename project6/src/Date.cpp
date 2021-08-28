#include "Date.h"
#include <iostream>


Date::Date (int day, int month, int year)
{
    m_day = day;
    m_month = month;
    m_year = year;
}
Date::~Date()
    {
        
    }
void Date::setDay(int day)
{
    m_day = day;
}
void Date::setMonth(int month)
{
    m_month = month;
}
void Date::setYear(int year)
{
    m_year = year;
}
void Date::Copy (Date d)
{
    m_day = d.m_day;
    m_month = d.m_month;
    m_year = d.m_year;
}