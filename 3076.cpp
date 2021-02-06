#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n ;

    while (cin >> n){
        int ans ;

        ans  = n / 100 ;

        cout << ((n%100==0) ? ans : (ans+1))  << "\n" ;
    }
}