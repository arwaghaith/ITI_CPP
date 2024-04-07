

#include <iostream>
using namespace std;
class student
{
    static int a;
    public:
    student()
    {
        cout<<"Student's Constructor  called"<<endl;
        a++;
    }
        static void print();
    ~student()
    {
                cout<<"Student's destructor  called"<<endl;

        a--;
    }
};

int student::a=0;
void student::print()
{
   
    cout<<a<<endl;

}
int main()
{
    student s1;
    student::print();
    {
        student s2;
        student::print();
    }
    student::print();

    return 0;
}

 