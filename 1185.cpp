#include <iostream>
using namespace std ;
int main ()
{
    double ar[12][12], sum=0.0 ;
    int mn=0, l, m=11 ;
    char s ;
    cin >> s;
    for (int i=0;i<12;i++){
        for (int j=0;j<12;j++){
            cin >> ar[i][j];
        }
    }
    for(int k=0;k<12;k++){
       for (l=0;l<m;l++){
            sum+=ar[k][l] ;
            mn++ ;
        }
       m-- ;
    }
    if (s=='S') cout << sum << endl;
    else cout << sum/mn << endl;
}

