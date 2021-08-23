#pragma once
#include <string>
#include "Date.h"

class Student
{
private:
    int m_id;
    std::string m_name;
    Date m_date;  
    static constexpr int m_size = 3;
    int m_grades[m_size];

public:
    Student() = default;
    Student (int id, std::string name, Date date,  int grades[3] , int size);
    double GetAvg();
    void Print();
    void Copy( Student s);
    void setgrades(int grades[], int size);
};