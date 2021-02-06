#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int s=0 ;
    long long p1, p2 ;
    double r1, r2 ;

    int n, yr=0 ; ;

    cin >> n ;

    while (n--){
        cin >> p1 >> p2 >> r1 >> r2 ;

        while (p1<=p2){
            p1 += p1 * r1/100 ;
            p2 += p2* r2/100 ;

            yr++ ;
            if (yr>100) {
                s = 1 ;
                break ; ;
            }
        }
        if (s==0) cout << yr << " anos.\n" ;
        else cout << "Mais de 1 seculo.\n" ;
        yr = 0 ; s=0 ;
    }
}