#include <iostream>
using namespace std ;

int main()

{
    int N, x, y, i, sum=0 ;

    cin >> N ;

    while(N--)
    {
        cin >> x >> y ;

        if (x>y){
        for (i=x-1 ; i>y ; i--)
        {
            if (i%2!=0)
            {
                sum=sum+i ;
            }

        }
        }
        else
        {
            for (i=x+1 ; i<y ; i++)
        {
            if (i%2!=0)
            {
                sum=sum+i ;
            }

        }
        }
        cout << sum << endl ;
        sum=0 ;
    }
}

