#include "Student.h"
#include <iostream>
#include <string>

    Student::Student (int id, std::string name, Date date,  int grades[3] , int size)
    {
        
        std::string str = std::to_string(id);
        int lengthofNumber = str.length();
        if(lengthofNumber!=5)
        {
            exit (3);
        }
        m_id = id;
        m_name = name;
        m_date.Copy(date);
        for (int i = 0; i< size; i++)
        {
            m_grades[i] = grades[i];
        }
    }

    double Student::GetAvg()
    {
        int sum = 0;
        for (int i = 0; i < m_size; i++)
        {
            sum += m_grades[i];
        }
        return static_cast<double>(sum)/m_size;
    }

    void Student::Print()
    {
        std::cout << "Student ID: " << m_id<<std::endl;
        std::cout << "---------------"<<std::endl;
        std::cout << "Name: " << m_name<<std::endl;
        std::cout << "Birthday: " << m_date.getDay() << "/"<<m_date.getMonth()<<"/"<<m_date.getYear()<<std::endl;
        std::cout << "Average: " << GetAvg()<<std::endl<<std::endl;
    }

    void Student::Copy ( Student s)
    {
        m_id = s.m_id;
        m_name = s.m_name;
        m_date.Copy(s.m_date);
        for (int i = 0 ; i < m_size; i++)
        {
            m_grades[i] = s.m_grades[i];
        } 
    }
