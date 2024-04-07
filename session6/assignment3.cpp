

#include <iostream>
using namespace std;
class Shape
{
    protected:
    string color;
    string name;
    public:
    virtual double getArea() = 0;
    string getName()

    {
        return name;

    }
};
class ThreeDimensionalShape: public Shape
{


    public:
    virtual double calculateVolume() = 0;
};


class Sphere: public ThreeDimensionalShape
{
    private:
    double radius;
    public:
    Sphere(double radius)
    {
        this->radius = radius;
    }
    double getArea()
    {
        return 4 * 3.14 * radius * radius;
    }
    double calculateVolume()
    {
        return (4/3) * 3.14 * radius * radius * radius;
    }
};


class Rectangle:public Shape
{



    private:
    double width;
    double height;
    public:
    Rectangle(double width, double height)
    {
        this->width = width;
        this->height = height;
    }
    double getArea()
    {
        return width * height;
    }
};

class Circle:public Shape

{


    private:
    double radius;
    public:
    Circle(double radius)
    {
        this->radius = radius;
    }
    double getArea()
    {
        return 3.14 * radius * radius;
    }
};

class Triangle: public Shape

{

    double base;
    double height;

    public:

    Triangle(double base, double height)
    {
        this->base = base;
        this->height = height;
    }

    double getArea()
    {
        return 0.5 * base * height;
    }

};



int main()

{

    Rectangle R1(5,6);
    Circle C1(7);

    Triangle T1(8,9);
    Sphere S1(10);

    cout << "Area of Rectangle: " << R1.getArea() << endl;
    cout << "Area of Circle: " << C1.getArea() << endl;
    cout << "Area of Triangle: " << T1.getArea() << endl;

    cout << "Volume of Sphere: " << S1.calculateVolume() << endl;
    cout <<"Area of sphere:"<<S1.getArea()<<endl;

    return 0;
}
