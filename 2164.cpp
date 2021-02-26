#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std ;

int main ()

{
    double n, ans, a, b, c=1+sqrt(5), d=1-sqrt(5) ;


    cin >> n ;


     a = pow((c/2),n) ;
     b = pow((d/2),n) ;

    ans = (a-b)/sqrt(5) ;

    cout << fixed << setprecision(1) << ans << endl ;
}
