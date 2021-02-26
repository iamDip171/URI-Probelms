#include <iostream>
#include <iomanip>
using namespace std ;

int main ()

{
    int N, i ;
    double x, y, div ;

    cin >> N ;

    for ( i=1 ; i<= N ; i++)
    {
        cin >> x >> y ;

        if ( y==0 )
        {
            cout << "divisao impossivel\n" ;
        }

        else {
       div = x/y ;

        cout << fixed << setprecision(1) << div << endl ;

    }

    }

}