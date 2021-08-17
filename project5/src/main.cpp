#include "Date.h"
#include "Student.h"
#include "Classroom.h"
#include <iostream>
#include <string>

int main() {
    constexpr int grades_size = 3;
    
    int student_1_grades[] = {100, 99, 95};
    int student_2_grades[] = {90, 90, 70};
    int student_3_grades[] = {100, 80, 92};
    int student_4_grades[] = {92, 95, 80};
    int student_5_grades[] = {60, 70, 90};

    Student a{10000, "Mayyas Iktelat", Date(1, 10, 2000), student_1_grades, grades_size};
    Student b{10001, "Muhammad Massalha", Date(1, 10, 2000), student_2_grades, grades_size};
    Student c{10002, "Noor Iktelat", Date(1, 10, 2000), student_3_grades, grades_size};
    Student d{10003, "Sonbol Yousef", Date(1, 10, 2000), student_4_grades, grades_size};
    Student e{10004, "Sonbol Jijini", Date(1, 10, 2000), student_5_grades, grades_size};

    constexpr int class_1_size = 5;
    Student students_1[class_1_size] = {a, b, c, d, e};

    Classroom class_1 {1,students_1, class_1_size};

    for (Student &s : students_1)
        s.Print();

    std::cout << "class 1 average: " << class_1.GetClassAvg() << std::endl;

    return 0;
}