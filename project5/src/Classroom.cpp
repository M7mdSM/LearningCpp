#include "Classroom.h"
#include <iostream>

    
Classroom::Classroom(int id, Student student[5], int class_size)
{
    m_id = id;
    for (int i = 0; i< 5; i++ )
    {
        
        m_student[i].Copy(student[i]);
        
    }
}

double Classroom::GetClassAvg()
{
    int sum = 0;
    for(int i = 0; i<5; i++)
    {
        sum += m_student[i].GetAvg();
    }
    return sum/5.0;
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