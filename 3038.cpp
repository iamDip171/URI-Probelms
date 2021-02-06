#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    string s ; 
    
    while(getline(cin, s)) {

    for (int i=0; s[i]; i++){
        if (s[i]=='@') s[i] = 'a' ;
        if (s[i]=='&') s[i] = 'e' ;
        if (s[i]=='!') s[i] = 'i' ;
        if (s[i]=='*') s[i] = 'o' ;
        if (s[i]=='#') s[i] = 'u' ;
        }

        cout << s << "\n" ;
    }
}