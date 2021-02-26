#include <iostream>
#include <iomanip>
using namespace std ;
int main ()
{
    int i,j,m=7,n=5 ;
    char s ;
    cin >> s ;
    double ar[12][12], sum=0.0 ;
    for (i=0;i<12;i++) {
        for (j=0;j<12;j++){
            cin >> ar[i][j] ;
        }
    }
    for (int j=7;j<12;j++){
        for (int k=n;k<m;k++){
            sum+= ar[j][k] ;
        }
        m++ ;
        n-- ;
    }
    if (s=='S') cout << fixed << setprecision(1) << sum << endl ;
    else cout << fixed << setprecision(1) << sum/30.0 << endl ;
}
