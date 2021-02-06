#include <bits/stdc++.h>
using namespace std ;

double baaler_matha(double product, double quantity){
    double sum = 0.0 ;
    
    sum = product* quantity ;
    return sum ;
}

int main ()
{
    int n;
    double pro, qt, result=0.0 ;
    cin >> n ;

    for (int i=1; i<=n; i++){
    cin >> pro >> qt ;
    if (pro == 1001 ) pro = 1.50 ;
    else if (pro == 1002) pro = 2.50 ;
    else if (pro == 1003) pro = 3.50 ;
    else if (pro == 1004) pro = 4.50 ;
    else if (pro == 1005) pro = 5.50 ;

    result += baaler_matha(pro, qt) ;

    }

    cout << fixed << setprecision(2) << result <<"\n" ;
}
