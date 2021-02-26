#include <iostream>
#include <algorithm>
using namespace std ;
int main ()
{
    int n ;
    int ar[500] ;
    while (cin >> n) {
    for (int i =0 ; i<n ; i++){
        cin >> ar[i] ;
    }
    sort (ar, ar+n) ;
    for (int j=0 ; j<n ; j++){
         if (ar[n-1]>=20) {
            cout << "3\n" ;
            break ;
        }
        if (ar[n-1]>=10 && ar[n-1]<20){
            cout << "2\n" ;
            break ;
        }
        if (ar[n-1]<10) {
            cout << "1\n" ;
            break ;
        }
    }
    }
}
