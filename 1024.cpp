#include <bits/stdc++.h>
using namespace std ;
void sexy_magi(char str[], int n){
    int len = strlen(str) ;

    for (int i=0 ; i<len/2; i++) swap (str[i], str[n-i-1]) ;
}
int main ()
{
    int n ; cin >> n ;
    getchar() ;
    while (n--){
        char s[10000] ;
        cin.getline(s, 10000) ;
        int l = strlen(s) ;
        //cout << s << endl;
        for (int i=0; s[i] != '\0'; i++) {
            if ((s[i]>=97 && s[i]<=122) ||(s[i]>=65 && s[i]<=90)){
                s[i]+= 3 ;
            }
        }
        sexy_magi(s, l) ;
        for (int i= l/2; s[i] != '\0'; i++) s[i]-- ;
        cout << s << endl;
    }
}