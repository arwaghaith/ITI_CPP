/*In this lab, we want to implement multilevel inheritance, so
first implement a class Vehicle which has a member variable
of type string to store the brand of this vehicle and function
display to print out this variable
● Implement a class Car which inherits from Vehicle class, this
class have member variable of type integer to store the
number of doors and a display method for this variable
● Implement a class SportCar which inherits from Car class,
this class have member variable of type bool which indicates
if this car can be converted or not and a display function to
view if this class is convertible or not
● Also provide the constructors for each class*/
#include <iostream>
using namespace std;
class Vehicle

{
    public:
    string brand;
    Vehicle()
    {
        brand = nullptr;
    }
    Vehicle(string brand)
    {
        this->brand = brand;
    }
    void display()
    {
        cout << "Brand: " << brand << endl;
    }
};

class Car: public Vehicle

{
    public:
    int doors;
    Car()
    {
        doors = 0;
    }
    Car(string brand, int doors): Vehicle(brand)
    {
        this->doors = doors;
    }
    void display()
    {
        Vehicle::display();
        cout << "Number of doors: " << doors << endl;
    }
};
class SportCar: public Car



{
    public:
    bool convertible;
    SportCar()
    {
        convertible = false;
    }
    SportCar(string brand, int doors, bool convertible): Car(brand, doors)
    {
        this->convertible = convertible;
    }
    void display()
    {
        Car::display();
        cout << "Convertible: " << (convertible ? "Yes" : "No") << endl;
    }
};
int main()
{
    Vehicle v("Toyota");
    v.display();
    Car c("Toyota", 4);
    c.display();
    SportCar sc("Toyota", 2, true);
    sc.display();
    return 0;
}