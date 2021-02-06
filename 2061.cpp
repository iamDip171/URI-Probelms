#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    string s = "fechou", t= "clicou", test ; int n, m ; cin >> n >> m ;

    getchar() ;

    for (int i=1; i<=m ; i++){
        cin >> test ;

        if (test == s) n++ ;
        else if (test == t) n-- ;
    }

    cout << n << "\n" ;
}