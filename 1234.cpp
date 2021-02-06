#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int j=0 ;
    string s; getline(cin,s) ;
    //s.erase(remove(s.begin(), s.end(), ' '), s.end()) ;
    for (int i=0; s[i]!='\0'; i++){
        if (s[i] != ' '){
            j++ ;
            if (s[i]>=97 && j%2==1) s[i] -= 32 ;
            else if (s[i] <97 && j%2==0) s[i] += 32 ;
        }
    }
    s[s.length()] = '\0' ;
    cout << s << endl ;

}