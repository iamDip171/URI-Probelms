#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    string s ;

    while (getline(cin, s)){
    for (int i=0; i<s.length(); i++){
        if (s[i] >=97 && s[i] <=110 || s[i]>=65 && s[i]<=78){
            s[i] += 13 ;
        }
        else if (s[i] >110 && s[i] <=122 || s[i]>78 && s[i]<=90) s[i] -= 13 ;
    }
    cout << s << endl;
}
}