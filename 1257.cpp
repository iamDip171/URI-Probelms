#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, j=0, super_sum=0, t, sum=0; cin >> n ;
    string s ;

    while (n--){
        cin >> t ;
        getchar() ;
        while (t--) {
            cin >> s ;
            for (int i=0; s[i]; i++){
                sum = ((s[i] > 64 && s[i] < 91) ? (s[i] - 'A') : (s[i]- 'a')) + i + j ;
                super_sum += sum ;
            }
            j++ ;
        }
        cout << super_sum << "\n" ; super_sum =0 ; j = 0 ;
    }
}