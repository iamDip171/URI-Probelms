#include <iostream>
#include <math.h>
using namespace std ;
int main ()
{
    int n,j=0 ;
    long long int x ;
    cin >> n ;
    while (n--){
            cin >> x ;
            if (x==0 || x==1) {
                    cout << "Not Prime\n" ;
                    continue ; }
            if (x==2) {
                    cout << "Prime\n" ;
                    continue ; }
    for (int i=2;i<sqrt(x)+1;i++){
        int a=x%i ;
        if (a==0) j++ ;
    }
    if (j==0) cout << "Prime\n" ;
    else cout << "Not Prime\n" ;
    j=0 ;
    }
}
