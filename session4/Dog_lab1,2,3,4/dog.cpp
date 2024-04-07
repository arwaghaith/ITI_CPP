
#include <iostream>
#include "dog.hpp"

using namespace std;
Dog::Dog()
{
    name = "";
    age = new int(0);
}

Dog::Dog(Dog& my_dog)
{
    name = my_dog.name;
    age = new int;
    *age= (*my_dog.age);
    cout<<"copy constructor"<<endl;
}

Dog::Dog(std::string my_name, int my_age)
{
    name = my_name;
    age = new int(my_age);
}

std::string Dog::getName()
{
    return name;
}

void Dog::setName(std::string my_name)
{
    name = my_name;
}

int Dog::getAge()
{
    if(age != nullptr)
    return *age;
    else
    return 0;
}

void Dog::setAge(int my_age)
{
    cout<<"set age"<<endl;
    *age = my_age;
}


