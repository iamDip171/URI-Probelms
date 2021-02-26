#include <stdio.h>

int main ()

{
    int n,i ;

    scanf("%d", &n) ;

    int ar[n] ;

    for ( i=0 ; i<n ; i++ )
    {
        scanf("%d", &ar[i]);

    }

    int min = ar[0],j ;

    for ( i=1 ; i<n; i++)
    {
        if ( min > ar[i])
        {
            min = ar[i] ;
            j= i ;
        }
        if ( min == ar[0]) j=0 ;
    }
    printf ("Menor valor: %d\nPosicao: %d\n", min, j);


}