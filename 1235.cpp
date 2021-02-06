#include <bits/stdc++.h>
using namespace std ;
void sexy_magi(string& str){
    int num = str.length() ;

    for (int i=0; i< num/2; i++){
        swap(str[i], str[num - i - 1]) ;
    }
}
int main ()
{
    int n; cin >> n ;

    getchar();

    while (n--){
        string s, s1, s2;
        getline (cin, s) ;

        int num = s.length() ;
        s1.assign(s, 0, (num/2)) ;
        s2.assign(s, num/2, num) ;
        //cout << s1 << " " << s2 << endl ;
        sexy_magi(s1) ; sexy_magi(s2) ;
        cout << s1+s2 << endl ;
    }
}