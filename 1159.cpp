#include <iostream>
using namespace std ;

int main ()
{
    int x,i,sum=0,m ;

   while (1)
    {
        cin >> x ;
        if (x==0) break ;

        m=5*2 ;
        int k=x+m ;

        for (i=x ; i < k ; i++)
        {
            if (i%2==0)
            {
                sum=sum+i;
            }
        }
        cout << sum << endl ;
        sum = 0 ;

    }


}


