#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    string s ;

    while (getline (cin, s) ) {

    for (int i=0; s[i]; i++){
        if (s[i]==','){
            if (s[i-1]==32) {
                s[i-1] = ',';
                for (int j=i; s[j]; j++) s[j] = s[j+1] ;
                }
        }
        else if (s[i]=='.'){
            if (s[i-1]==32) {
                s[i-1] = '.';
                for (int j=i; s[j]; j++) s[j] = s[j+1] ;
                }
        }
    }

    cout << s <<"\n" ; 
    }
}