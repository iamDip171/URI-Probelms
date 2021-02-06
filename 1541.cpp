#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int a,b, percent ;

    while (1) {
        cin >> a ;
        if (a == 0) break ;
        cin >> b >> percent ;
        cout << (int) sqrt((a*b)*100/percent) << "\n" ;
    }
}