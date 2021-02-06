#include <bits/stdc++.h>

using namespace std ;

void maxxAndminn (int arr[], int n) {
    int sumMax = 0, max = 0, sumMin = 0, min = 0 ;

    for (int i=0; i<n/2; i++){
        
        sumMax = arr[n-i-1] + arr[i];
        
        if (i==0) min = sumMax ;

        if (sumMax > max) max = sumMax ;
        if (min !=0 && sumMax < min) min = sumMax ;
    }

    cout << max << " " << min << "\n" ;
}

int main ()
{
    int n, arr[21000], max, min ;

    while (1) {
        
        cin >> n ;
        if (n==0) break ;
        for (int i=0; i<n*2; i++) cin >> arr[i] ;
        
        maxxAndminn (arr, n*2) ;

    }
}