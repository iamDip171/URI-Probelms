#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n; cin >> n ;
    getchar() ;
    while (n--){
        string s ; cin >> s ;
        int a ; cin >> a ;

        for (int i=0; s[i] != '\0'; i++){
            s[i] -= a ;
            if (s[i]<65) s[i] = s[i] + 26  ;
        }
        cout << s << endl ;
    }
}