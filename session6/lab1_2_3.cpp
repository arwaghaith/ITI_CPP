
#include <iostream>
using namespace std;
class Person
{
     public:
    string name;
    string ID;
    int age;
    string Gender;
    string country;

    

    Person()
    {

        name=nullptr;
        ID=nullptr;
        age=0;
        Gender=nullptr;
        country=nullptr;




    }


    Person(string name,string ID,int age,string Gender,string country)
    {
        this->name=name;
        this->age=age;
        this->country=country;
        this->Gender=Gender;
        this->ID=ID;
    }

    Person(const Person & Src)
    {
        name = Src.name;
        ID = Src.ID;
        age = Src.age;
        Gender=Src.Gender;
        country=Src.country;
    }

  
        Person(Person&& Src)
        {
            name = std::move(Src.name);
            ID = std::move(Src.ID);
            age = Src.age;
            Gender = std::move(Src.Gender);
            country = std::move(Src.country);
        }

        
       

    Person & operator=(const Person & Src)
    {
        if(this != &Src)
        {
            name = Src.name;
            ID = Src.ID;
            age = Src.age;
            Gender=Src.Gender;
            country=Src.country;

        }
        return *this;
    }
    string getName()
    {
        return name;
    }
    string getID()
    {
        return ID;
    }
    int getAge()
    {
        return age;
    }

    string getGender()
    {
        return Gender;
    }
    string getCountry()
    {
        return country;
    }
    void setName(string name)
    {
        this->name=name;
    }

    void setID(string ID)
    {
        this->ID=ID;
    }
    void setAge(int age)
    {
        this->age=age;
    }

    void setGender(string Gender)
    {
        this->Gender=Gender;
    }
    void setCountry(string country)
    {
        this->country=country;
    }

};
class Student:public Person
{

    public:
    string course;
    int fees;

    Student():Person{}
    {
        course=nullptr;
        fees=0;
    }
    Student(string name,string ID,int age,string Gender, string country, string course, int fees):Person{name,ID,age,Gender,country}

    {
        this->course=course;
        this->fees=fees;
    }
    string getCourse()
    {
        return course;
    }
    int getFees()
    {
        return fees;
    }

    void setCourse(string course)
    {
        this->course=course;
    }

    void setFees(int fees)
    {
        this->fees=fees;
    }

};



class Employee:public Person

{
   string job_title;
   int salary;


   public:


    Employee():Person{}
    {
         job_title=nullptr;
         salary=0;
    }

    Employee(string name,string ID,int age, string Gender,string country,string job_title,int salary):Person{ name, ID, age,Gender, country}

    {

        this->job_title=job_title;
        this->salary=salary;

    }
    Employee (const Employee & E):Person(E)
    {
        if(this != &E)
        {
            job_title = E.job_title;
            salary = E.salary;
        
        }


    }

    Employee(Employee&& E):Person(std::move(E))
    {
        job_title = std::move(E.job_title);
        salary = std::move(E.salary);
    }



    Employee & operator=(const  Employee & P)
    {
        if(this != & P)
        {
            job_title = P.job_title;
            salary = P.salary;
        }
    }

  

    string getJob_title()
    {
        return job_title;
    }

    int getSalary()
    {
        return salary;
    }

    void setJob_title(string job_title)
    {
        this->job_title=job_title;
    }

    void setSalary(int salary)
    {
        this->salary=salary;
     }

};
/*
For the last lab we’ve implemented, We want to
implement the copy and move constructors for class
Person(base class) and class Employee(Derived class)
● Also, overload the operator = with copy and move
assignment
● These functions must first copy or move the base part
then the derived part
*/


int main()

{
    Student S1("ARWA","1777",54,"f","Egypt","Maths",500);
    cout<<"***********************************************************"<<endl;
    cout<<"name:  "<<S1.name<<endl;
    cout << "ID: " << S1.getID() << endl;
    cout << "Age: " << S1.getAge() << endl;
    cout << "Gender: " << S1.getGender() << endl;
    cout << "Country: " << S1.getCountry() << endl;
    cout << "Course: " << S1.getCourse() << endl;
    cout << "Fees: " << S1.getFees() << endl;
    cout<<"***********************************************************"<<endl;

    Employee E1("ARWA","1777",54,"f","Egypt","Doctor",5000);

    cout << "***********************************************************" << endl;
    cout << "name: " << E1.name << endl;
    cout << "ID: " << E1.getID() << endl;
    cout << "Age: " << E1.getAge() << endl;
    cout << "Gender: " << E1.getGender() << endl;
    cout << "Country: " << E1.getCountry() << endl;
    cout << "Job Title: " << E1.getJob_title() << endl;
    cout << "Salary: " << E1.getSalary() << endl;
    cout << "***********************************************************" << endl;

    Employee E2(E1); 

     cout << "***********************************************************" << endl;
     cout << "Details of E1 (copy constructed):" << endl;

    cout << "name: " << E1.name << endl;
    cout << "ID: " << E1.getID() << endl;
    cout << "Age: " << E1.getAge() << endl;
    cout << "Gender: " << E1.getGender() << endl;
    cout << "Country: " << E1.getCountry() << endl;
    cout << "Job Title: " << E1.getJob_title() << endl;
    cout << "Salary: " << E1.getSalary() << endl;
    cout << "***********************************************************" << endl;
    Employee E3(std::move(E1)); 
    cout << "***********************************************************" << endl;
     cout << "Details of E1 (copy constructed):" << endl;

    cout << "name: " << E1.name << endl;
    cout << "ID: " << E1.getID() << endl;
    cout << "Age: " << E1.getAge() << endl;
    cout << "Gender: " << E1.getGender() << endl;
    cout << "Country: " << E1.getCountry() << endl;
    cout << "Job Title: " << E1.getJob_title() << endl;
    cout << "Salary: " << E1.getSalary() << endl;

    cout << "Details of E2 (copy constructed):" << endl;
    cout << "name: " << E2.name << endl;
    cout << "ID: " << E2.getID() << endl;
    cout << "Age: " << E2.getAge() << endl;
    cout << "Gender: " << E2.getGender() << endl;
    cout << "Country: " << E2.getCountry() << endl;
    cout << "Job Title: " << E2.getJob_title() << endl;
    cout << "Salary: " << E2.getSalary() << endl;

    cout << "Details of E3 (move constructed):" << endl;
    cout << "name: " << E3.name << endl;
    cout << "ID: " << E3.getID() << endl;
    cout << "Age: " << E3.getAge() << endl;
    cout << "Gender: " << E3.getGender() << endl;
    cout << "Country: " << E3.getCountry() << endl;
    cout << "Job Title: " << E3.getJob_title() << endl;
    cout << "Salary: " << E3.getSalary() << endl;

}




