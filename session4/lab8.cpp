#include <iostream>
using namespace std;
class Person
{
    string name;
    int age;
    string country;

    public:
    Person(string name,int age,string country)
    {
        this->name=name;
        this->age=age;
        this->country=country;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string getCountry()
    {
        return country;
    }
    void setName(string name)
    {
        this->name=name;
    }
    void setAge(int age)
    {
        this->age=age;
    }
    void setCountry(string country)
    {
        this->country=country;
    }

};
int main()
{
    Person p1("Ali",20,"Pakistan");
    cout<<"Name: "<<p1.getName()<<endl;
    cout<<"Age: "<<p1.getAge()<<endl;
    cout<<"Country: "<<p1.getCountry()<<endl;
    p1.setName("Ahmed");
    p1.setAge(25);
    p1.setCountry("USA");
    cout<<"Name: "<<p1.getName()<<endl;
    cout<<"Age: "<<p1.getAge()<<endl;
    cout<<"Country: "<<p1.getCountry()<<endl;
    return 0;
}