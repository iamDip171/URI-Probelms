#include <iostream>
using namespace std ;

int main()

{
    long long int m,n, i,j, ans1=1, ans2=1 ;
    while(cin >> m >> n )
    {

    for (i=m; i>=1; i--) {ans1=ans1*i ;}
    for (j=n; j>=1; j--) {ans2=ans2*j ;}

    long long int sum= ans1+ans2 ;
    cout << sum << endl ;
    ans1=1 ; ans2=1 ;
    }
}


