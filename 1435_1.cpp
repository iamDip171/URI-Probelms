#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int arr[100], n, k=1;
    scanf ("%d", &n) ;
    int st = 0 , end = n ;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (j>1 && j<n && i>1 && i<n) {
                if (i<= n/2+1 && j>=i && j<=n-i+1) cout << i << " " ;
                else if (i> n/2+1 && j>= n-i+1 && j<=i) cout << n-i+1 << " " ;   
                else {
                    if (j<n/2+1) cout << j << " " ;
                    else cout << n-j+1  << " ";
                }
            }
            else cout << "1 " ; 
        }
        printf ("\n") ;
    }
}





/*                  if (j>= n-i+1 && j<=i) cout << n-i+1 << " " ;
                    else {
                        if (j<n/2+1) cout << j << " " ;
                        else cout << n-j+1  << " ";
                    }
                }*/



/*                  if (j>=i && j<=n-i+1) cout << i << " " ;
                    else {
                        if (j<n/2+1) cout << j << " " ;
                        else cout << n-j+1  << " ";
                    }
                }*/