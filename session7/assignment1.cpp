
#include <iostream>
using namespace std;

class Shape


{
    public:
    virtual double calculateArea() = 0;
    virtual double calculatePerimeter() = 0;
};

class Circle:public Shape

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
    double calculatePerimeter()
    {
        return 3.14*diameter;
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
        double calculatePerimeter()
        {
            return 2*(length+width);
        }
    



};

 class Triangle:public Shape

 {


        double base, height, side1, side2, side3;
        public:
        Triangle(double base, double height, double side1, double side2, double side3)
        {
            this->base = base;
            this->height = height;
            this->side1 = side1;
            this->side2 = side2;
            this->side3 = side3;
        }
        double calculateArea()
        {
            return 0.5*base*height;
        }
        double calculatePerimeter()
        {
            return side1+side2+side3;
        }
    
 };


int main()

{
    
    Shape *s[3];
    s[0]=new Circle(10);
    s[1]=new Rectangle(4,6);
    s[2]=new Triangle(3,4,4,3,5);
    for(int i=0;i<3;i++)
    {
        cout<<"Shape "<<i+1<<" -  Area: "<<s[i]->calculateArea()<<", Perimeter: "<<s[i]->calculatePerimeter()<<endl;
    }
    return 0;
}


