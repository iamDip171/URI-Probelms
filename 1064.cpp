#include <iostream>
#include <iomanip>

using namespace std ;

int main()

{
    double a, b= 0   ;
    int z , i =0 ;

    for ( z=1 ; z <= 6 ; z++ )
    {
        cin >> a ;
        if ( a > 0 )
        {
            i++ ;
            b = b + a ;
        }
    }
    cout << i << " valores positivos" << endl ;
    cout << fixed << setprecision(1) << b/i << endl ;

}
