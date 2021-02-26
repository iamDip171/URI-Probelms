#include <iostream>
#include <iomanip>
using namespace std ;

int main()

{
    double i,j, sum=1 ;

    for (i=3, j=2; i<=39|| j<=i; i=i+2, j=j*2)
    {
        sum = i/j + sum;
    }
    cout << fixed << setprecision(2) << sum << endl ;

}


