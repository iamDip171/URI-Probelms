#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n; 

    while (cin >> n && n !=0){
        int col=1, j=1 ;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){

            if (j==1) cout << setw(n) << j* col ;

            else {
                col = col * 2 ;
                cout << " " << setw(n) << col ;}
            
        }
        j = j*2 ; col = j ;
        cout << endl ;
    }
    cout << "\n"; 
    }
    
}