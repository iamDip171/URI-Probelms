#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int test, n ; cin >> test ;

    while (test--){
        int ans; cin >> n ;
        ans = pow (2, n) ;

        cout << ans -1 << endl ;
    }
}