#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int sum=0, a, b, c, x, y, z ; cin >> a >> b >> c >> x >> y >> z ;

    if (a>x) sum += 0;
    else sum += abs(a-x) ;
    if (b>y) sum += 0;
    else sum += abs(b-y) ;
    if (c>z) sum += 0;
    else sum += abs(c-z) ;

    cout << sum << endl ;
}