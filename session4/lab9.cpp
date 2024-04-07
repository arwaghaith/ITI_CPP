#include <iostream>
using namespace std;
class Car
{
    string company;
    string model;
    int year;
    public:
    Car(string company,string model,int year)
    {
        this->company=company;
        this->model=model;
        this->year=year;
    }
    void print()
    {
        cout<<"Company: "<<company<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Year: "<<year<<endl;
    }
};


int main()
{
    Car c1("Toyota","Corolla",2019);
    c1.print();
    return 0;
}