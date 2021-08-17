#pragma once
#include "Student.h"
class Classroom
{
    private:
    int m_id;
    Student m_student [5];
    int m_class_size;
    public:
    Classroom(int id, Student student[5], int class_size);
    double GetClassAvg();
    Student GetBest();
};