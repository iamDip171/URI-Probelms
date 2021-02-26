#include <iostream>
using namespace std ;

int main ()

{
    int n, i, p=1 ;

    cin >> n ;

    for ( i=n ; i>=1 ; i--)
    {
        p=p*i ;

    }
    cout << p << endl;


}