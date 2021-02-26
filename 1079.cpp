#include <iostream>
#include <iomanip>
using namespace std ;

int main ()
{
    int N,i,j ;
    double M[3], sum, ans ;

    cin >> N ;

    while(N--)
    {
        for (j=0; j<3 ; j++)
        {
            cin >> M[j] ;
            sum=M[0]*2+ M[1]*3 + M[2]*5 ;
            ans = sum/10 ;

        }
        cout << fixed << setprecision(1) << ans << endl ;

    }


}

