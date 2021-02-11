#include <iostream>


using namespace std ;

int main ()

{
    int A, B, ans;

    while ( cin >> A >> B )
    {
        if ( A > B || A == B )
    {
         ans = 24 - (A - B) ;
    }
    else
    {
         ans = B - A ;
    }
    cout << "O JOGO DUROU " << ans << " HORA(S)" << endl ;

    }

}
