
#include <iostream>

using namespace std;

template <typename T> 

class Counter
{
private:
    static int counter;

public:
    Counter()
    {
        counter++;
    }

    ~Counter()
    {
        counter--;
    }

    static int getCount()
    {
        return counter;
    }
};
template <typename T> 

int Counter<T>::counter = 0;

int main()
{
    Counter<int> c1;
    Counter<int> c2;
    cout << Counter<int>::getCount() << endl; 

    Counter<double> c3;
    cout << Counter<double>::getCount() << endl; 

    return 0;
}