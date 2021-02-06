#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int var[5] = {300, 1500, 600, 1000, 150}, n, ans=0 ; 

    for (int i=0; i<5; i++) {
        cin >> n ;
        ans += n * var[i] ;}

        ans += 225 ;

        cout << ans << endl ;

}
