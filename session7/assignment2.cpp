
#include <iostream>
#include <vector>
#include <string>
using namespace std; 

class Animal
{
    public:
    string name;
    int age;

    Animal()
    {
        name = nullptr;
        age = 0;
    }

    Animal(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    virtual void printAnimal() = 0;
    virtual void makeSound() = 0;
};

class Mammal : public Animal
{
    string Fur_color;

    public:
    Mammal() : Animal()
    {
        Fur_color = nullptr;
    }

    Mammal(string name, int age, string Fur_color) : Animal(name, age)
    {
        this->Fur_color = Fur_color;
    }

    void printAnimal()
    {
        cout << "Name: " << name;
        cout << ", Age: " << age << " years";
        cout << ", Fur color: " << Fur_color << endl;
    }

    void makeSound()
    {
        cout << "Mammal: " << name << " is making sound" << endl;
    }
};

class Bird : public Animal
{
    double wingSpan;

    public:
    Bird() : Animal()
    {
        wingSpan = 0;
    }

    Bird(string name, int age, double wingSpan) : Animal(name, age)
    {
        this->wingSpan = wingSpan;
    }

    void printAnimal()
    {
        cout << "Name: " << name;
        cout << ", Age: " << age << " years";
        cout << ", Wing Span: " << wingSpan << " meters" << endl;
    }

    void makeSound()
    {
        cout << "Mammal: " << name << " is making sound" << endl;
    }
};

class Reptile : public Animal
{
    bool hasShell;

    public:
    Reptile() : Animal()
    {
        hasShell = false;
    }

    Reptile(string name, int age, bool hasShell) : Animal(name, age)
    {
        this->hasShell = hasShell;
    }

    void printAnimal()
    {
        cout << "Name: " << name;
        cout << ", Age: " << age << " years";
        cout << ", Has Shell: " << (hasShell ? "Yes" : "No");
    }

    void makeSound()
    {
        cout << "Mammal: " << name << " is making sound" << endl;
    }
};

int main()
{
    vector<Animal*> zoo;

    zoo.push_back(new Mammal("Lion", 5, "Golden"));
    zoo.push_back(new Bird("Eagle", 10, 2.5));
    zoo.push_back(new Reptile("Turtle", 20, true));

    for (int i = 0; i < zoo.size(); i++)
    {
        zoo[i]->makeSound();
        zoo[i]->printAnimal();
    }
}
