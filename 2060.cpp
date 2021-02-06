#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n, t=0, th=0, f=0, fi=0 ; cin >> n ;

    while (n--){
        int num; cin >> num ;
        if (num % 2==0) t++ ;
        if (num % 3==0) th++ ;
        if (num % 4==0) f++ ;
        if (num % 5==0) fi++ ;
    }
    cout << t << " Multiplo(s) de 2\n" << th << " Multiplo(s) de 3\n" << f << " Multiplo(s) de 4\n" << fi << " Multiplo(s) de 5\n" ;
}