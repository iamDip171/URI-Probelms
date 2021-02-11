#include <iostream>
#include <iomanip>

using namespace std ;

int main ()

{
    int N, i, X, num = 0 ;

    cin>> N ;

    for ( i = 1 ; i <= N ; i++ )
    {
        cin >> X ;
        if ( X <= 20 && X >= 10 )
        {
            num++ ;
        }
    }
    cout << num << " in\n" ;
    cout << N - num << " out\n" ;
}
