#include <iostream>
#include "INT.hpp"

using namespace std;

int main
()
{
    INT a(5);
    INT c(4);

    INT b = a + c;

    INT d = a - c;

    cout << b.getVal() << endl;
    cout << d.getVal() << endl;

    b++;
    cout << b.getVal() << endl;
    --d;

    cout << d.getVal() << endl;

    cin >> a;
    cout << a << endl;
    
    return 0;
}