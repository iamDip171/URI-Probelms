#include <iostream>
using namespace std ;

int main ()
{
    int i=0,j,n;
    cin >> n ;
    for (;i<1000;)
    {
        for (j=0;j<n;j++)
        {
            cout << "N[" << i << "] = " << j << endl ;
            i++ ;
            if (i<1000) continue ;
            else break ;
        }

    }
}
