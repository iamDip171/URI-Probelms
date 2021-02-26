#include <iostream>
using namespace std ;

int main ()

{
    double N, sum=0, i=0, j=0 ;

    while(1)
    {
        cin >> N ;

        if ( N>=0 && N <= 10 )
        {
            sum = sum + N ;
            i++ ;
        }
        else
        {
            cout << "nota invalida\n" ;

        }
        if ( i==2)
        {
            break ;
        }
    }
     cout << "media = " << sum/i << endl ;

}