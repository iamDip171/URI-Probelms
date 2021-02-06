#include <bits/stdc++.h>
using namespace std ;

void BinSearch(int array[], int n, int element) {

    int start =0, end = n-1, location = -1, mid = 0 ;

    while (start <= end) {

        mid = (start + end) / 2 ;

        if (array[mid]== element){
            location = mid ;
            break ;
        }

        if (array[mid] < element) start = mid + 1 ;
        else end = mid - 1 ;
    } 

    if (location != -1) cout << element << " found at " << location + 1 << "\n" ;
    else cout << element << " not found\n" ;
}

int main ()
{
    int n, test, temp=0, j=1 ;

    while (1) {
        cin >> n >> test ;
        int ser[n], chk[test] ;
    if (n==0 && test ==0) break ;

    for (int i=0; i<n; i++) cin >> ser[i] ;
    for (int j=0; j<test; j++) cin >> chk[j] ;

    sort (ser, ser+n) ;

    cout << "CASE# "<< j << ":\n" ;
    for (int i=0; i<test; i++){
        temp = chk[i] ;
        BinSearch(ser, n, temp) ;
    }
    j++ ;
    }
    
}