#include <bits/stdc++.h>
using namespace std ;

int main ()

{
    int N[4];

    for (int i=0; i<4; i++)
        cin >> N[i] ;
        sort(N,N+4) ;
    if (N[0]+N[1] > N[2])
        cout << "S\n" ;
    else if (N[1]+N[2]> N[3])
        cout << "S\n" ;
    else if (N[0]+N[2]> N[3])
        cout << "S\n" ;
    else cout << "N\n" ;
}
