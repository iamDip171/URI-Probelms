#include <iostream>
#include <iomanip>
using namespace std ;

int main()

{
    double N,x;
    int i ;

    cin >> N ;
    cout << "N[" << "0" << "] = " << fixed << setprecision(4) << N << endl ;

    for (i=1; i<100; i++)
    {
        x=N/2.0 ;
        N=x ;
        cout << "N[" << i << "] = " << fixed << setprecision(4) << N << endl ;

    }

}
