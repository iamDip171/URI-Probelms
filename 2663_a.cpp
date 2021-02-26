#include <bits/stdc++.h>
using namespace std ;

int main() {
    int n, k, count = 0, points[1000] ;
    cin >> n >> k ;

    for (int i=0; i<n; i++) {
        cin >> points[i] ;
    }

    sort (points, points+n, greater<int>()) ;

    for (int j=0; j<n; j++) {
        if (count < k) {
            count++ ;
        }
        else if (points[j] == points[j-1]) count++ ;
        else break ;
    }

    cout << count << "\n\n" ;
}