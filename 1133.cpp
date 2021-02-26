#include<iostream>
using namespace std;

int main ()

{
    int x, y, i, k=0 ;

    cin >> x >> y ;

    if ( x < y )
    {
        for ( i= x+1; i<y ; i++)
        {
            k=i%5 ;

           if( k==2 || k==3 )
           {
              cout << i << endl ;
           }

        }


    }
    else if( x > y )
    {
       for ( i= y+1; i<x ; i++)
        {
            k=i%5 ;

           if( k==2 || k==3 )
           {
              cout << i << endl ;
           }

        }

    }

}