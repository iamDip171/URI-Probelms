#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    char s[1001], c[1001] ;
    int n ; cin >> n ;
    while (n--) {
    cin >> s >> c ;
    int col = 0;
    for (int i= strlen(c), j=strlen(s); i>=0; i--, j--){
        if (s[j] == c[i])
            col++ ;
        else break ;
    }
    if (col == strlen(c)+1) cout << "encaixa\n" ;
    else cout << "nao encaixa\n" ;
    
    }
}