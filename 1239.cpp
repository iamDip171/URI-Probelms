#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int a=0, b=0, c=0, d=0 ; string s, k= "<i>", l= "</i>", m= "<b>", n= "</b>"; int j=0 ;
    getline(cin, s) ;
    for (int i=0; s[i]; i++){
            if (s[i]== '_' && j==0) {
                a=i ;
                j++ ; 
        }
            else if (s[i]=='_' && j!=0) {
                b=i ; 
                j=0 ;
            }
            
    }

    s. insert(a, k) ;
    s. insert(b, l) ; cout << s << endl ;
    
}

