#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n, sum=0 ; cin >> n;
    getchar() ;
    while (n--){
        string s ; cin >> s ;
        for (int i=0; i<s.length(); i++){
            if (s[i]=='2' || s[i]== '3' || s[i]== '5') sum+=5 ;
            if (s[i]=='1') sum+= 2 ;
            if (s[i]=='4') sum+= 4 ;
            if (s[i]=='6' || s[i]=='9' || s[i]=='0') sum += 6 ;
            if (s[i]=='7') sum+=3 ;
            if (s[i]=='8') sum+=7 ;
        }
        cout << sum << " leds\n";
        sum=0 ;
    }
    //cout << endl ;
}