#include <string>
using namespace std;
class Student 
{
    private:
        string name;
        char Class;
        int roll;
        int marks;
    public:
    Student();
    Student(string name, char Class, int roll, int marks);
    void set_student_Name(string name);
    void set_student_Class(char Class);
    void set_student_Roll(int roll);
    void set_student_Marks(int marks);
    void display_student_details();
    string get_Grade();
};

    

        