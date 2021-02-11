#include <iostream>
#include <iomanip>

using namespace std ;

int main ()
{
    int x, i, num= 0 ;

    for ( i=1 ; i <= 5 ; i++ )
    {
        cin >> x ;

        if ( x % 2 == 0 ){
            num++ ;

        }
    }
     cout << num << " valores pares\n" ;

}
