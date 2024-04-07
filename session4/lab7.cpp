#include <iostream>
using namespace std;
class Rectangle
{
    double length;
    double width;
    public:
    Rectangle(double length,double width)
    {
        this->length=length;
        this->width=width;

    }
    double getArea()
    {
        return length*width;
    }
    double getPerimeter()
    {
        return 2*(length+width);
    }
};

int main()
{
  
  Rectangle R1(4,6);
    cout<<"Area of Rectangle: "<<R1.getArea()<<endl;
    cout<<"Perimeter of Rectangle: "<<R1.getPerimeter()<<endl;
    return 0;
}
