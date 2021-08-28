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
        std::cout<<"Working..."<<std::endl;
        std::cout << "Enter the ID of the student number: "<<i+1<<std::endl;
        int s_id;
        std::cin >> s_id;

        std::cout << "Enter the name of the student number: "<<i+1<<std::endl;
        std::string s_name;
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::getline(std::cin,s_name);

        std::cout << "Enter the date of the student number: "<<i+1<<" day then month then year: "<<std::endl;
        Date s_date;
        int day, month, year;
        std::cin >> day >> month >> year;
        s_date.setDay(day);
        s_date.setMonth(month);
        s_date.setYear(year);

        int *arr = new int[grades_size];
        std::cout << "Enter the grades of the student number "<< i+1 <<": "<<std::endl;
        for (int u = 0; u<grades_size; u++)
        {
            std::cin >> arr[u];
        }
        
        Ss[i].Copy({s_id, s_name, s_date, arr, grades_size});
    }
    
    

    for (int i = 0 ; i < students_size; i++)
    {
        Ss[i].Print();
    }
    Classroom class_1 {1,Ss, students_size};
    std::cout << "class 1 average: " << class_1.GetClassAvg() << std::endl;

    
    return 0;
}