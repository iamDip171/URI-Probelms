#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n ; cin >> n ;

    while (n--){
        int yr ; cin >> yr ;

        if (yr>=2015) cout << yr - 2015 + 1 << " A.C.\n" ;
        else cout << 2015 - yr << " D.C.\n" ;
    }
}