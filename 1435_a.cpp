#include <bits/stdc++.h>
using namespace std ;

void s_vabi(int n){
    int r, k=1, a = 0, b=0, ar[201][201], test=n ; 
    if (n%2==0) r= n/2 ;
    else r = n/2 + 1 ; 
    while (r--){
        for (int i=a; i<test; i++){
            for (int j=b; j<test; j++) ar[i][j] = k ;
        }
        k++; a++; b++; test-- ;
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++) cout << ar[i][j] << "  " ;
        cout << endl ;
    }
}
int main ()
{
    while (1){
        int tc ;
        cin >> tc ; if (tc==0) break ;
        else 
        s_vabi(tc) ;
    }
    cout << endl ;

}