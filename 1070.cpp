#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int num1 , x, y;

    cin >> num1 ;

    x = num1 + 1 ;


    if ( num1%2 == 0 )
    {
        for ( y = x ; y < num1 + 12 ; y=y+2 )
        {
            cout << y << endl ;
        }
    }
    else
    {
        for ( y = num1+2 ; y < num1 + 14 ; y=y+2 )
        {
            cout << y << endl ;
        }
    }

}