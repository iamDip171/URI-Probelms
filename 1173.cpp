#include <iostream>
using namespace std ;

int main ()

{
    int v,i ;
    cin >> v ;

        for (i=0; i<10 ; i++)
        {
            cout << "N" << "[" <<i << "]" <<" = " << v << endl ;
            v=v*2 ;
        }
}
