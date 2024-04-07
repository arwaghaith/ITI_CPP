
#include <iostream>
using namespace std;

class Shape 
{
    public:
    virtual double calculateArea() = 0;
};

class Circle: public Shape

{

    double diameter;

    public:

    Circle(double diameter)

    {

        this->diameter = diameter;

    }

    double calculateArea()

    {

        return 3.14 * diameter * diameter / 4;

    }

};

class Rectangle:public Shape

{

    double length, width;

    public:

    Rectangle(double length, double width)

    {

        this->length = length;

        this->width = width;

    }

    double calculateArea()

    {

        return length * width;

    }

};



int main()

{

    Shape *s1 = new Circle(5);

    Shape *s2 = new Rectangle(5, 10);

    cout << "Area of Circle: " << s1->calculateArea() << endl;

    cout << "Area of Rectangle: " << s2->calculateArea() << endl;

    delete s1;

    delete s2;

    return 0;
}
