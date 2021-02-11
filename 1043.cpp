#include <iostream>
#include <iomanip>
using namespace std ;

int main ()

{
    double A, B , C ;

    cin >> A >> B >> C ;

    if ( (A+B) > C && (B+C) > A && (A+C) > B )
    {
        double P = A + B + C ;
        cout << "Perimetro = " << fixed << setprecision (1) << P << endl ;
    }
    else
    {
        double M = .5 * (A + B ) * C ;
        cout << "Area = " << fixed << setprecision (1) << M << endl ;
    }


}
