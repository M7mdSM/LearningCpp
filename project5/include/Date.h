#pragma once
class Date
{
    private:
    int m_day;
    int m_month;
    int m_year;
    public:
    Date (int day, int month, int year);
    Date () = default;
    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);
    int getDay(){return m_day;}
    int getMonth(){return m_month;}
    int getYear(){return m_year;}
};