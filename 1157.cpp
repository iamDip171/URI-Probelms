#include<iostream>
using namespace std ;

int main ()

{
    int N, i, div ;

    cin >> N ;

    for ( i=1 ; i <= N ; i++ )
    {
        div = N%i ;

        if ( div == 0)
        {
            cout << i << endl ;
        }
    }

}