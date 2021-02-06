#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n; cin >> n ;

    getchar() ;

    while (n--){
        string s ; getline(cin, s) ;
        
        if (s[0] >96 && s[0] < 123) cout << s[0] ;
        for (int i=1; s[i]; i++){
            if (s[i] > 96 && s[i] < 123) {
                if (s[i-1] < 96 || s[i-1] > 123) cout << s[i] ;}
            
        }
        cout << "\n" ;
    }
}