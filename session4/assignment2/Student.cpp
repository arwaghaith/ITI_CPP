#include "Student.hpp"
#include <iostream>
using namespace std;
Student::Student():Student("Unknown", 'X', 0, 0)
{
}
Student::Student(string name, char Class, int roll, int marks)
{
    this->name = name;
    this->Class = Class;
    this->roll = roll;
    this->marks = marks;
}

void Student::set_student_Name(string name)
{
    this->name = name;
}
void Student::set_student_Class(char Class)
{
    this->Class = Class;
}
void Student::set_student_Roll(int roll)
{
    this->roll = roll;
}
void Student::set_student_Marks(int marks)
{
    this->marks = marks;
}
void Student::display_student_details()
{
    cout << "Name: " << name << endl;
    cout << "Class: " << Class<< endl;
    cout << "Roll: " << roll << endl;
    cout << "Marks: " << marks << endl;
}

string Student::get_Grade()
{
    if(marks >= 85 && marks <= 100)
    {
        return "A";
    }
    else if(marks >= 75)
    {
        return "B";
    }
    else if(marks >= 65)
    {
        return "C";
    }
    else if(marks >= 50 )
    {
        return  "D";
    }
    else if(marks < 50  && marks>=0  )
    {
        return "F";
    }
    else
    {
        return "Invalid marks";
    }
}




        

