#include <iostream>
#include "Student.hpp"

int main()
{
    Student student1;
    student1.set_student_Name("John");
    student1.set_student_Class('A');
    student1.set_student_Roll(1);
    student1.set_student_Marks(90);
    student1.display_student_details();
    cout << "Grade: " << student1.get_Grade() << endl;
    return 0;
}