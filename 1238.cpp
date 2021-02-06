#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    string s1, s2, sFinal ; int len1 = 0 , len2 = 0 ;
    int test ;

    cin >> test ;

    while (test--){

        cin >> s1 >> s2 ;

        len1 = s1.length() ;
        len2 = s2.length() ;

        int max = (len1 > len2) ? len1 : len2 ;
        int min = (len1 < len2) ? len1 : len2 ;

        for (int i=0; i<max; i++){
        if (i < min ) cout << s1[i] << s2[i] ;
        else {
            if (len1 > len2) cout << s1[i] ;
            else cout << s2[i] ;
            }
        }

        cout << "\n" ;

    }

}