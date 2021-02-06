#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n, arr[100][100], k1 = 2, a1 = 0;
    while (n!=0){
        cin >> n ;
        int k2 = n-1 ;
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++) {
                arr[i][j] = 1;
            } 
        } 

        if (n%2 != 0) {
            for (int i=0; i<n; i++) {
                for (int j=0; j<n; j++) {
                    if (i>0 && j > 0 && j < n-1 && i<n-1) arr[i][j] = k1 ;
                    else if (i== n/2 && j== n/2) arr[i][j] = ++k1 ;
                }
            }
        }

        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) printf ("%d  ", arr[i][j]) ;
            printf ("\n") ;
        }
        k1= 2;
    }
}