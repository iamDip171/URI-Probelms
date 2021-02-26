#include <iostream>
#include <iomanip>
using namespace std ;
int main ()
{
    double n[12][12],sum=-0.0 ;
    int i,j,x ;
    char ch ;
    cin >> x ;
    cin >> ch ;
    for (i=0; i<12 ; i++) {
        for (j=0 ; j<12 ; j++) {
            cin >> n[i][j] ;
        }
    }
    for (int k=0;k<12;k++){
        sum+=n[k][x] ;
    }
    if(ch=='S'){
    cout <<  fixed << setprecision(1) << sum << endl ;
    }
    else {
        cout << fixed << setprecision(1) << sum/12 << endl ;
    }
}
