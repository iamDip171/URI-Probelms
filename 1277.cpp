#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n, test, k=0, div, bla =0 ; cin >> n ; double ans ;
    string s[100], attn ;
    while (n--){
        cin >> test ; getchar() ;
        for (int i=0; i<test; i++) cin >> s[i] ;
        for (int i=0; i<test; i++) {
            cin >> attn ;
            for (int j=0; attn[j]; j++){
                if (attn[j]=='P') k++ ;
                if (attn[j]== 'M') bla++;  
            } 
            if (bla != 0) div = attn.length() - bla ;
            else div = attn.length() ;
            ans = (double) k / div ;
            //cout << k << " " << div << " " << ans << " ";
            if ((ans * 100) < 75) cout << s[i] ;
            k=0 ; bla = 0 ; ans = 0;
        }
        cout << "\n" ; 
    }
}

