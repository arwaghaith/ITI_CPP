#ifndef INT_HPP
#define INT_HPP

#include <iostream>

class INT {
private:
    int* value;

public:
   
    // Overloaded arithmetic operators

    INT(int value);

    INT(const INT &obj);

    INT operator=(INT &&obj);
    int  getVal() const;
    void setVal(int value);

    INT operator+(const INT &obj);

    INT operator-(const INT &obj);

    INT operator*(const INT &obj);

    INT operator/(const INT &obj);

    INT operator++();
    INT operator++(int);
    INT operator--();
    INT operator--(int);

    friend std::ostream &operator<<(std::ostream &os, const INT &obj);

    friend std::istream &operator>>(std::istream &is, INT &obj);

  
   };

#endif
