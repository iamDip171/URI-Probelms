#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n, temp, i, j ; cin >> n ;
    int test[] = {500, 100, 50, 10, 5, 1} ;

    for (i=0; n!=0; i++){
        temp = n / test[i] ;
        n = n % test[i] ;

        for (j=1; j<=temp; j++){
            if (i==0) cout << "D" ;
            else if (i==1) cout << "C" ;
            else if (i==2) cout << "L" ;
            else if (i==3) cout << "X" ;
            else if (i==4) cout << "V" ;
            else if (i==5) cout << "I" ;
        }

        //cout << temp << " ";
        
    }
    
}
