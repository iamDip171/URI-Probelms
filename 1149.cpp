#include <iostream>
using namespace std ;

int main ()

{
    int i, n, x, sum=0 ;

    cin >> n ;

    while (1)
    {
        cin >> x ;
        if (x>0) {
        for (i=n; i<n+x; i++)
        {
            sum=sum + i ;
        }
        cout << sum << endl ;
        break ;
        }

    }

}
