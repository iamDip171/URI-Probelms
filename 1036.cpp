#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std ;

int main ()

{
   double A,B,C ;
   
   cin >> A >> B >> C ;
   
   double sqr1 = (B * B - 4 * A * C ) ;
   
    double var1 = -B + sqrt (sqr1) ;
    double var2 = -B - sqrt (sqr1) ;
    
    double ans1 = var1 / ( 2 * A ) ;
    double ans2 = var2 / ( 2 * A ) ;
    
    if ( A == 0)
    {
        cout << "Impossivel calcular" << endl ;
    }
    else if ( sqr1 < 0 )
    {
        cout << "Impossivel calcular" << endl ;
    }
    else 
    {
        cout << showpoint ;
        cout << fixed ;
        cout << setprecision (5) ;
        cout << "R1 = " << ans1 << endl ;
        cout << "R2 = " << ans2 <<endl ;
    }
    
}    