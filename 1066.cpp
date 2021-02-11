#include <iostream>
using namespace std ;

int main ()
{
    int x, i, num1= 0, num2=0, num3=0, num4=0 ;

    for ( i=1 ; i <= 5 ; i++ )
    {
        cin >> x ;

        if ( x % 2 == 0 ){
            num1++ ;

        }
        else {
            num2++ ;
        }
        if ( x > 0 )
        {
            num3 ++ ;
        }
        if ( x < 0) {
            num4 ++ ;
        }
    }
    cout << num1 << " valor(es) par(es)\n" ;
    cout << num2 << " valor(es) impar(es)\n" ;
    cout << num3 << " valor(es) positivo(s)\n" ;
    cout << num4 << " valor(es) negativo(s)\n" ;

}
