#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    char ch[27] ; int n; cin >> ch >> n ;
    int test ;
    
    for (int i=0; i<n; i++){
        cin >> test ;
        cout << ch[test-1] ;
    }
    cout <<"\n" ;
}