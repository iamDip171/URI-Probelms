#include <iostream>
using namespace std ;

int main ()

{
    int ar[100],i ;

    for ( i=0 ; i<100 ; i++ )
    {
        cin >> ar[i] ;

    }

    int max = ar[0],j ;

    for ( i=1 ; i<100; i++)
    {
        if ( max < ar[i])
        {
            max = ar[i] ;
            j= i ;
        }
        if ( max == ar[0]) j=0 ;
    }
    cout << max << endl << j+1 << endl ;


}