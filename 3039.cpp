#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n, j=0, k=0 ; cin >> n;
    getchar() ;

    while (n--){
        string s ; getline (cin, s) ;
        if ((s[s.length()-1])== 'F') j++ ;
        else k++ ;
    }
    cout << k << " carrinhos\n" ;
    cout << j << " bonecas\n" ;
}