#include <iostream>
using namespace std ;

int main ()

{
    int i, j=7, k ;

    for ( i=1 ; i<= 9 ; i=i+2 )
        {
            for ( k=1 , j=j ; k<=3 ; k++, j-- )
            {
                cout <<"I=" << i << " " <<"J=" << j << endl ;

            }
            j=j+5 ;
        }

}