#include <bits/stdc++.h>
using namespace std ;

int substring (string manString, string chkString) {
    int j= 0, k=0 ;

    for (int i=0; manString[i]; i++) {
        if (manString[i] == chkString[j]) {
            j++ ;
        }
        else j=0 ;
    }

    if (j == chkString.length()) return 1 ;
    else return 0 ;
}

int main() {
    string s[100] ;
    int i = 0, k ;
    while (1) {
        getline(cin,s[i]) ;
        if (s[i] == "</html>") break ;
        i++ ;
    }
    int j = 0 ;

    while (substring(s[j], "</body>") != 1) {
        if (substring(s[j], "<body>") == 1) k = 1;
        j++ ;
        if (k==1 && substring(s[j], "</body>") != 1) cout << s[j] << "\n" ;
               
    }


}