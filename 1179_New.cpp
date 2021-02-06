#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int par[5], impar[5], test, p=0, im=0, p1=0, i1=0 ;

    for (int i=0; i<15; i++) {
        cin >> test ;

        if (test % 2 == 0) {
            par[p] = test ;
            p++ ;
        }
        else {
            impar[im] = test ;
            im++ ;
        }

        if (p==5) {
            for (int j=0; j<5; j++) cout << "par[" << j << "] = " << par[j] << "\n" ;
            p=0 ;
        }

        if (im==5) {
            for (int k=0; k<5; k++) cout << "impar[" << k << "] = " << impar[k] << "\n" ;
            im=0 ;
        }

        if (i==14) {
            for (int l=0; l<im; l++) cout << "impar[" << l << "] = " << impar[l] << "\n" ;
            for (int a=0; a<p; a++) cout << "par[" << a << "] = " << par[a] << "\n" ;
        }
    }
}