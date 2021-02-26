#include <bits/stdc++.h>
using namespace std ;

int fibonacci (int n) {
    int fi = 0 ;
    int se = 1 ;
    int sum= 0;
    
    if (n==0) sum = 0 ;
    if (n==1) sum = 1 ;
    else {
        for (int i=2; i<=n; i++) {
            sum = fi + se ;
            fi = se ;
            se = sum ;
        }
    }
    return sum ;
}

int main() {
    int test, n ;

    cin >> test ;

    while (test--) {
        cin >> n ;

        cout << "Fib(" << n << ") = " << fibonacci(n) << "\n";
    }
}