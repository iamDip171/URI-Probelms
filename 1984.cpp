#include <iostream>
using namespace std ;

int main ()

{
    long long int n, sum=0, r, r1,j ;

    cin >> n ;

    while (n!=0)
    {
        r1= n%10 ;
        n=n/10 ;
        cout << r1;
    }

    cout << endl ;
}
