#include <iostream>
using namespace std ;

int main ()
{
    int m, n=3, i, j, k=1 ;

    cin >> m ;

    for ( i=1 ; i<=m ; i++)
    {
        for ( j=k ;j<=n ; j++){

            cout << j << " " ;

        }
       cout << "PUM" ;
        cout << endl ;
        k= k+4 ;
        n= n+4 ;

    }

}
