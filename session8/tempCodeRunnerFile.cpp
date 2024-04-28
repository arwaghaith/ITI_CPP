

#include <iostream>
using namespace std;

template< typename T>

T sum(int  n, T x)

{

    int i=0;
    T sum_x=1;

    for(i=1;i<=n;i++)

    {

        sum_x+=x*i;




    }
    return sum_x;


}



int main()

{

    int n=5;

    double x=2.156;

    cout<<sum(n,x)<<endl;

    return 0;
}

