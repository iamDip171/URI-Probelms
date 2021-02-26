#include <iostream>
#include <iomanip>
using namespace std ;

int main()
{
    double N ;
    int i ;

    for (i=0; i<100;)
    {
        cin >> N ;

        if(N<=10) cout << "A[" << i++ << "] = " << fixed << setprecision(1) << N << endl ;
        else i++ ;
    }

}
