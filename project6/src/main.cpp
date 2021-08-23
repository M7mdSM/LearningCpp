#include "Date.h"
#include "Student.h"
#include "Classroom.h"
#include <iostream>
#include <string>

int main() {

    std::cout << "Enter the number of the students: "<<std::endl;
    int students_size ;
    std::cin >> students_size;
    std::cout << "Enter the number of the grades: "<<std::endl;
    int grades_size ;
    std::cin >> grades_size;
    
    Student *Ss = new Student [students_size];


    
    for (int i = 0; i<students_size; i++)
    {
        std::cout << "Enter the ID of the student number: "<<i<<std::endl;
        int s_id;
        std::cin >> s_id;

        std::cout << "Enter the name of the student number: "<<i<<std::endl;
        std::string s_name;
        std::getline (std::cin,s_name);

        std::cout << "Enter the date of the student number: "<<i<<" day then month then year: "<<std::endl;
        Date s_date;
        int day, month, year;
        std::cin >> day >> month >> year;
        s_date.setDay(day);
        s_date.setMonth(month);
        s_date.setYear(year);

        int *arr = new int[grades_size];
        std::cout << "Enter the grades of the student number "<< i <<": "<<std::endl;
        for (int u = 0; u<grades_size; u++)
        {
            std::cin >> arr[i];
        }
        
        Ss[i] = {s_id, s_name, s_date, arr, grades_size};
    }
    
    /*Student a{10000, "Mayyas Iktelat", Date(1, 10, 2000), s1, grades_size};
    Student b{10001, "Muhammad Massalha", Date(1, 10, 2000), s2, grades_size};
    Student c{10002, "Noor Iktelat", Date(1, 10, 2000), s3, grades_size};
    Student d{10003, "Sonbol Yousef", Date(1, 10, 2000), s4, grades_size};
    Student e{10004, "Sonbol Jijini", Date(1, 10, 2000), s5, grades_size};*/

    constexpr int class_1_size = 5;
    //Student students_1[class_1_size] = {a, b, c, d, e};

    //Classroom class_1 {1,students_1, class_1_size};

    for (int i = 0 ; i < students_size; i++)
    {
        Ss[i].Print();
    }
    //std::cout << "class 1 average: " << class_1.GetClassAvg() << std::endl;

    return 0;
}