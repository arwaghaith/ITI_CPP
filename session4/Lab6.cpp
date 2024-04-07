#include <iostream>
using namespace std;
class Circle
{
    double radius;
    public:
    Circle(double r)
    {
        radius=r;
    }
    double getArea()
    {
        return 3.14*radius*radius;
    }
    double getCircumference()
    {
        return 2*3.14*radius;
    }
};

int main()
{
    Circle c1(3);
    cout<<"Area of circle: "<<c1.getArea()<<endl;
    cout<<"Circumference of circle: "<<c1.getCircumference()<<endl;
    return 0;
}
