#include <iostream>
#include <string>

class Dog
{
    private:
    std::string name;
    int* age;

    public:
    Dog();
    Dog(Dog& my_dog);
    Dog(std::string, int);
    std::string getName();
    
    void setName(std::string my_name);
    
    int getAge();
  
    void setAge(int my_age);
};

// Implementation of Dog member functions

