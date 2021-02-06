#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int time, min, ans ; char s ;
    while (cin >> time >> s >> min){
        if (time >= 7) ans = (time * 60 + min) - 420 ;
        else ans = 0 ;
        cout << "Atraso maximo: " << ans << endl ;
    }
}