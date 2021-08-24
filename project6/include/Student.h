#pragma once
#include <string>
#include "Date.h"

class Student
{
private:
    int m_id;
    std::string m_name;
    Date m_date;  
    int m_size;
    int *m_grades = new int[m_size] ;

public:
    Student() = default;
    Student (int id, std::string name, Date date,  int grades[] , int size);
    double GetAvg();
    void Print();
    void Copy( Student s);
    void setgrades(int grades[], int size);
};