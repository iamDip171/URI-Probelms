#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std ;
int main ()
{
    int n ;
    string ch ;
    double d, s[7] ,sum=0.0,ans=0.0;
    cin >> n ;
    while (n--){
        cin >> ch >> d ;
        for (int i=0;i<7;i++) cin >> s[i] ;
        sort (s,s+7) ;
        //for (int j=0;j<7;j++) cout << s[j] << " ";
        for (int j=1;j<6;j++) sum+=s[j] ;
        ans=sum*d ;
        cout << ch << " " << fixed << setprecision(2) << ans << endl ;
        ans=0 ;
        sum=0 ;    }
}
