#include <iostream>
#include <iomanip>

using namespace std ;

int main ()

{
    double A, B, C ;

    cin >> A >> B >> C ;

    if (A >= B+C || B >= A+C || C>= A+B)
        {
            cout << "NAO FORMA TRIANGULO\n" ;
        }
        else if ( A*A == (B*B + C*C) || B*B == (A*A + C*C) || C*C == (A*A + B*B) )
        {
            cout << "TRIANGULO RETANGULO\n" ;
        }
        else if ( A*A > (B*B + C*C) || B*B > (A*A + C*C) || C*C > (A*A + B*B) )
        {
            cout << "TRIANGULO OBTUSANGULO\n" ;
        }
        else if ( A*A < (B*B + C*C) || B*B < (A*A + C*C) || C*C < (A*A + B*B) )
        {
            cout << "TRIANGULO ACUTANGULO\n" ;
        }

        if ( A==B && B==C && C==A )
    {
             cout << "TRIANGULO EQUILATERO\n" ;
    }
        else if ( A==B || B==C || C==A ) {
            cout << "TRIANGULO ISOSCELES\n" ;

    }
    else {
        cout << "" ;
    }


    }
