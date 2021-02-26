#include <iostream>
using namespace std ;

int main()

{
    double i,j=1,a=1, b=3 ;

    for ( i=0 ; i<=2 ; i=i+.2 )
    {
        for ( j=a; j<=b ; j++)
        {
            cout << "I=" <<i << " " << "J=" << j << endl ;

        }
        a=a+.2 ;
        b=b+.2 ;

    }
}


