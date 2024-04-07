/*1-OOP
"object oriented programming"
"class
 object
 constuctor
 abstraction
 encapsulation-
data hiding -
 operator overloading-
inheritance-
polymorphism-
template
smart pointer-
STL "standard template library"
CONCURRECY -THREADS -MULTITHREADING -PARALLELISM

Y3NI A OBJECT ORIENTED PROGRAMMING 

BHANDLE L CODE FI COLLECTION OF OBJECTS*/


#include <iostream>
#include "dog.hpp"
using namespace std;

int main()
{

    Dog my_dog;
    Dog my_dog2("dofff",5);
    Dog my_dog3(my_dog2);
    string name=my_dog.getName();
    cout<<"name:  "<<name<<endl;
    int age =my_dog.getAge();
    cout<<"age:  "<<age<<endl;
    my_dog.setName("roy");
    my_dog.setAge(3);
    name=my_dog.getName();
    cout<<"name:  "<<name<<endl;
    age =my_dog.getAge();
    cout<<"age:  "<<age<<endl;
    cout<<"*****************************************************************************"<<endl;
     name=my_dog2.getName();
    cout<<"name:  "<<name<<endl;
    age =my_dog2.getAge();
    cout<<"age:  "<<age<<endl;

    cout<<"*****************************************************************************"<<endl;
    name=my_dog3.getName();
    cout<<"name:  "<<name<<endl;
    age =my_dog3.getAge();
    cout<<"age:  "<<age<<endl;
    return 0;




 
}
  
  
          
