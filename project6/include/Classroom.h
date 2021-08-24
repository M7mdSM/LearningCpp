#pragma once
#include "Student.h"
class Classroom
{
private:
    int m_id;
    int m_class_size = 5;
    Student *m_student = new Student[m_class_size];

public:
    Classroom(int id, Student student[], int class_size);
    double GetClassAvg();
    Student GetBest();
};