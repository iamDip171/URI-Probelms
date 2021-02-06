#include <bits/stdc++.h>
using namespace std ;

int muri_khao (int n, int ar[]){
    int col = 0 ;
    for (int i=0; i<5; i++){
        if (ar[i]== n) col++ ;
    }
    return col ;
}
int main ()
{
    int n; cin >> n ; 
    int test[5] ;

    for (int i=0; i<5; i++){
        cin >>test[i] ;
    }

    cout << muri_khao(n, test) << "\n" ;
}