#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std ;

int main ()

{
    double a = 4.00, b = 4.50, c = 5.00, d = 2.00, e = 1.50, X, Y ;

    cin >> X >> Y ;

    if ( X == 1 )
    {
        double ans = Y * a ;

        cout << showpoint ;
        cout << fixed ;
        cout << setprecision (2);
        cout << "Total: R$ " << ans << endl;
    }
    else if ( X == 2 )
    {
        double ans = Y * b ;

        cout << showpoint ;
        cout << fixed ;
        cout << setprecision (2);
        cout << "Total: R$ " << ans << endl;
    }
    else if ( X == 3 )
    {
        double ans = Y * c ;

        cout << showpoint ;
        cout << fixed ;
        cout << setprecision (2);
        cout << "Total: R$ " << ans << endl;
    }
    else if ( X == 4 )
    {
        double ans = Y * d ;

        cout << showpoint ;
        cout << fixed ;
        cout << setprecision (2);
        cout << "Total: R$ " << ans << endl;
    }
    else
    {
        double ans = Y * e ;

        cout << showpoint ;
        cout << fixed ;
        cout << setprecision (2);
        cout << "Total: R$ " << ans <<endl;
    }

    
}
