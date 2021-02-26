#include <iostream>
using namespace std ;

int main ()
{
    int n,x,y,i,j,sum=0,m ;

    cin >> n ;

   while (n--)
    {
        cin >> x >> y ;

        m=y*2 ;
        int k=x+m ;

        for (i=x ; i < k ; i++)
        {
            if (i%2!=0)
            {
                sum=sum+i;
            }
        }
        cout << sum << endl ;
        sum = 0 ;
    }


}

