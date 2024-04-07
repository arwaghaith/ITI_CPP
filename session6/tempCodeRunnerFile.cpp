/*Implement a C++ program that demonstrates the concept of
inheritance using different types of inheritance.
Your program should include the following:
1-Create a base class called "Person" with the following members:
A private data member called "name" of type string.
A public member function called "getName" that returns the name of
the person.
2-Create a derived class called "Student" that inherits from the
"Person" class.
The "Student" class should have an additional private data member
called "studentID" of type int.
Implement a public member function called "getStudentID" that
returns the student ID.

3-Create another derived class called "Teacher" that also inherits from
the "Person" class.
The "Teacher" class should have an additional private data member
called "teacherID" of type int.
Implement a public member function called "getTeacherID" that
returns the teacher ID.
4-Create a derived class called "TeachingAssistant" that inherits from
both the "Student" and "Teacher" classes.
The "TeachingAssistant" class should have an additional private data
member called "course" of type string.
Implement a public member function called "getCourse" that returns
the course assigned to the teaching assistant.
In the main function, create objects of each class and demonstrate
the use of the member functions.
Print the name, student ID, teacher ID, and course of each person.*/

#include <iostream>
using namespace std;

class Person

{

    private:
    string name;
    public:

    Person(string name)
    {
        this->name = name;
    
    }
   virtual string getName()
    {
        return name;
    }
};

class  Student:public Person{


    private:
    int studentID;
    public:

    Student(string name, int studentID):Person(name)
    {
        this->studentID = studentID;
    }
    int getStudentID()
    {
        return studentID;
    }
};

class Teacher: public Person

{

    private:
    int teacherID;
    public:

    Teacher(string name, int teacherID):Person(name)
    {
        this->teacherID = teacherID;
    }
    int getTeacherID()
    {
        return teacherID;
    }
};


class TeachingAssistant : public Student, public Teacher
{

    string course;
    public:
TeachingAssistant(string Sname, int studentID, string Tname, int teacherID, string course) : Student(Sname, studentID), Teacher(Tname, teacherID), course(course) {}
    string getCourse()
    {
        return course;

    }



};

int main()

{

    Student s("John", 1234);
    Teacher t("Jane", 5678);
    TeachingAssistant ta("Alice", 4321, "Bob", 8765, "Math");

    cout << "Student name: " << s.getName() << endl;
    cout << "Student ID: " << s.getStudentID() << endl;

    cout << "Teacher name: " << t.getName() << endl;
    cout << "Teacher ID: " << t.getTeacherID() << endl;

    cout << "Teaching Assistant name: " << ta.Teacher::getName() << endl;
    cout << "Teaching Assistant student name: " << ta.Student::getName() << endl;

    cout << "Teaching Assistant Student ID: " << ta.getStudentID() << endl;
    cout << "Teaching Assistant Teacher ID: " << ta.getTeacherID() << endl;
    cout << "Course: " << ta.getCourse() << endl;

    return 0;


    

}




