#include "Classroom.h"
#include <iostream>

    
Classroom::Classroom(int id, Student student[], int class_size)
{
    m_id = id;
    m_class_size = class_size;
    for (int i = 0; i< m_class_size; i++ )
    {
        
        m_student[i].Copy(student[i]);
        
    }
}
Classroom::~Classroom()
    {
        
        delete[] m_student;
    }

double Classroom::GetClassAvg()
{
    double sum = 0;
    for(int i = 0; i<m_class_size; i++)
    {
        sum += m_student[i].GetAvg();
        
    }
    return sum/m_class_size;
}
Student Classroom::GetBest()
{
    Student best;
    for (int i = 0; i < m_class_size-1; i++)
    {
        if (m_student[i].GetAvg()>m_student[i+1].GetAvg())
        {
            best = m_student[i];
        }
    }
    return best;
}