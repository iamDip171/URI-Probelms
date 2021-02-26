#include <iostream>

using namespace std ;

int main ()
{
    int X, g, d, a, num1=0, num2=0, num3=0 ;
    string ch ;

    while (1){

        cin >> X ;

        if ( X== 1 ){
           num1++ ;
        }

        if ( X == 2 ){
           num2++ ;
        }

        if ( X == 3 ){
            num3++ ;
        }

        if ( X == 4 ){
            break ;
        }


    }
    cout << "MUITO OBRIGADO" << endl ;
    cout << "Alcool: " << num1 << endl ;
    cout << "Gasolina: " << num2 << endl ;
    cout << "Diesel: " << num3 << endl ;
}
