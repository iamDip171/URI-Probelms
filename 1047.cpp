#include <iostream>

using namespace std ;

int main ()

{
    int h1,m1, h2, m2, hor1, min1,multi ;

    cin >> h1 >> m1 >> h2 >> m2 ;

    if ( h1 >= h2 && m1 >= m2 ){

    multi = 1440 - (h1 * 60 + m1) + (h2 * 60 + m2);
    }
    else {
        multi = (h2 * 60 + m2) - (h1 * 60 + m1);
        }

         hor1 = multi / 60 ;
         min1 = multi % 60 ;

        cout << "O JOGO DUROU " << hor1 << " HORA(S) E " << min1 << " MINUTO(S)" << endl ;


}
