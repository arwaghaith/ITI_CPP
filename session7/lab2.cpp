

#include <iostream>
using namespace std;

class Animal
{

    public:
    virtual void makeSound() = 0;

};
class dog: public Animal
{

    public:

    void makeSound()

    {

        cout << "Woof Woof" << endl;

    }

};

class cat:public Animal

{

    public:

    void makeSound()

    {

        cout << "Meow" << endl;

    }

}; 

class bird :public Animal

{

    public:

    void makeSound()

    {

        cout << "Tweet! Tweet!" << endl;

    }

};


int main()

{

    dog d;

    cat c;

    bird b;

    d.makeSound();

    c.makeSound();

    b.makeSound();

    return 0;
}