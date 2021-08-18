#pragma once
#include "Student.h"
class Classroom
{
private:
    int m_id;
    int m_class_size = 5;
    Student m_student[5];

public:
    Classroom(int id, Student student[5], int class_size);
    double GetClassAvg();
    Student GetBest();
};