#include <bits/stdc++.h>
using namespace std ;
void Sexy (string &s, const string &c){
    size_t p = string :: npos ;
    while ((p = s.find(c)) != string :: npos){
        s.erase(p, c.length()) ;
    }
}
int main ()
{
    int c = 0, z=0 ;
    string s ;
    char ch[10] ;

    while (1){
        cin >> ch >> s ;
        if (ch[0]=='0' && s=="0") break ;
        Sexy (s, ch) ;
        
        for (int i=0; s[i]; i++) { if (s[i]=='0') c++ ;}

        if (c== s.length()) cout << "0\n" ; 
        else {
            for (int i=0 ; ; i++){
                if (s[i]=='0') z++ ;
                else break ;
            }

            s.erase (0, z) ; 
            cout << s << "\n"; 
        }
        z=0; c=0 ;
        

    }
}