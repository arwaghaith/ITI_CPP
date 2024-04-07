
#include <iostream>

#include "INT.hpp"
using namespace std;





INT::INT(int value)

{
    this->value = new int(value);
    cout << *this->value << endl;
}

INT::INT(const INT &obj)
{
    this->value = new int(obj.getVal());
    cout << *this->value << endl;
}

INT INT::operator=(INT&& obj)
{
    if (this != &obj)
    {
        delete this->value; // Deleting the old value
        this->value = obj.value; // Moving the value
        obj.value = nullptr; // Resetting obj's value to avoid double deletion
    }
    return *this;
}


int INT::getVal() const
{
    return *this->value;
}

void INT::setVal(int value)
{
    *this->value = value;
}

INT INT::operator+(const INT &obj)
{
    INT temp(*this->value + obj.getVal());
    return temp;
}

INT INT::operator-(const INT &obj)
{
    INT temp(*this->value - obj.getVal());
    return temp;
}

INT INT::operator*(const INT &obj)
{
    INT temp(*this->value * obj.getVal());
    return temp;
}

INT INT::operator/(const INT &obj)
{
    INT temp(*this->value / obj.getVal());
    return temp;
}

INT INT::operator++()
{
    ++(*this->value);
    return *this;
}

INT INT::operator++(int)
{
    INT temp(*this->value);
    ++(*this->value);
    return temp;
}

INT INT::operator--()
{
    --(*this->value);
    return *this;
}

INT INT::operator--(int)
{
    INT temp(*this->value);
    --(*this->value);
    return temp;
}

std::ostream &operator<<(std::ostream &os, const INT &obj)
{
    os << *obj.value;
    return os;
}

std::istream &operator>>(std::istream &is, INT &obj)
{
    int temp;
    is >> temp;
    obj.setVal(temp);
    return is;
}
