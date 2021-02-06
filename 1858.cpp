#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n, k=0 ; cin >> n ;
    int ar[n] ;

    for (int i=0; i<n; i++) cin >> ar[i] ;

    int min = ar[0] ;
    for (int i=1; i<n; i++){
        if (min > ar[i]){
            min = ar[i] ;
            k = i ;
        }
    }
    cout << k+1 << endl ;
}