#include "Classroom.h"


    
    Classroom::Classroom(int id, Student student[5], int class_size)
    {
        m_id = id;
        m_class_size = class_size;
        for (int i = 0; i< 5; i++ )
        {
            
            m_student[i] = student[i];
           
        }
    }
    double Classroom::GetClassAvg()
    {
        double sum = 0;
        double avg = 0;
        for (int i = 0; i<5; i++)
        {
            sum = sum + m_student[i].GetAvg();
        }
        avg = sum / 5;
        return avg;
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