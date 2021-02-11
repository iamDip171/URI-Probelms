#include <iostream>
#include <iomanip>

using namespace std ;

int main ()

{
    double N, per ;

    cin >> N ;

    if ( N >= 0 && N <= 400.00 )
    {
        per = 15 ;
        double A = N * ( per / 100 ) + N ;
        cout << "Novo salario: " << fixed << setprecision (2) << A << endl;
        cout << "Reajuste ganho: " << fixed << setprecision (2) << N * .15 << endl;
        cout << "Em percentual: " << fixed << setprecision (0) << per << " %" << endl ;

    }
    else if ( N > 400.00 && N <= 800.00 )
    {
        per = 12 ;
        double B = N * ( per / 100 )  + N ;
        cout << "Novo salario: " << fixed << setprecision (2) << B << endl ;
        cout << "Reajuste ganho: " << fixed << setprecision (2) << N * .12 << endl;
        cout << "Em percentual: " << fixed << setprecision (0) << per << " %" << endl ;
    }
    else if ( N > 800.00 && N <= 1200.00 )
    {
        per = 10;
        double C = N * ( per / 100 ) + N ;
        cout << "Novo salario: " << fixed << setprecision (2) << C << endl ;
        cout << "Reajuste ganho: " << fixed << setprecision (2) << N * .10 << endl;
        cout << "Em percentual: " << fixed << setprecision (0) << per << " %" << endl ;
    }
    else if ( N > 1200.00 && N <= 2000.00 )
    {
        per = 7 ;
        double D = N * ( per / 100 ) + N ;
        cout << "Novo salario: " << fixed << setprecision (2) << D << endl ;
        cout << "Reajuste ganho: " << fixed << setprecision (2) << N * .07 << endl;
        cout << "Em percentual: " << fixed << setprecision (0) << per << " %" << endl ;
    }
    else
    {
        per = 4 ;
        double E = N * ( per / 100 ) + N ;
        cout << "Novo salario: " << fixed << setprecision (2) << E << endl ;
        cout << "Reajuste ganho: " << fixed << setprecision (2) << N * .04 << endl;
        cout << "Em percentual: " << fixed << setprecision (0) << per << " %" << endl ;
    }
}