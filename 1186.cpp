#include <iostream>
#include <iomanip>
using namespace std ;
int main ()
{
    double ar[12][12], sum=0.0 ;
    int l, m=11 ;
    char s ;
    cin >> s;
    for (int i=0;i<12;i++){
        for (int j=0;j<12;j++){
            cin >> ar[i][j];
        }
    }
    for(int k=1;k<12;k++){
       for (l=11;l>=m;l--){
            sum+=ar[k][l] ;
        }
       m-- ;
    }
    if (s=='S') cout << fixed << setprecision(1) << sum << endl;
    else cout << fixed << setprecision(1) << sum/66.0 << endl;
}

