#include <iostream>
#include <iomanip>
using namespace std ;
int main ()
{
    double ar[12][12] , sum=0.0;
    int m=11, n=0, o=1 ;
    char s ;
    cin >> s ;
    for (int i=0;i<12;i++){
        for (int j=0;j<12;j++){
            cin >> ar[i][j] ;
        }
    }
    for (int k=n;k<5;k++){
        for (int l=o;l<m;l++){
           sum+=ar[l][k] ;
        }
        m-- ;
        n++ ;
        o++ ;
    }
    if (s=='S') cout << fixed << setprecision(1) << sum << endl ;
    else cout << fixed << setprecision(1) << sum/30.0 << endl ;
}
