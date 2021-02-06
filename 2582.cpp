#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    string s[]={"PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!", "CRIPTONIZE", "OFFLINE DAY", "SALT", " ANSWER!", "RAR?", "WIFI ANTENNAS"} ;

    int n, x, y ; cin >> n ;

    while (n--){
        cin >> x >> y ;
        int sum = x+y ;
        cout << s[sum] << endl ;
    }
}