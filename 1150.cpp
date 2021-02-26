#include <iostream>
using namespace std ;

int main ()

{
    int x, z, i, sum=0,j=0 ;

    cin >> x ;
    while (1)
    {
        cin >> z ;
        if (z<=x)
        {
            continue ;
        }
        else {
            for (i=x; i<z ; i++)
            {
                sum=sum+i ;
                j++ ;
                if (sum>z)  break ;
            }
        }
        break ;
    }
    cout << j << endl;

}
