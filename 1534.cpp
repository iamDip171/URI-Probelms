#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int test, end = 0;  

    int arr[70][70] ;
    while (cin >> test)
    {
        end = test ;
        int mid = (test/2)+1 ;

        for (int i=1; i<=test; i++)
        {
            for (int j=1; j<=test; j++)
            {
                if (test % 2 != 0){
                    if (j==i && i != mid && j != mid) cout << "1" ;
                    else if (j == end) cout << "2" ;
                    else cout << "3" ;
                }

                else {
                    if (j==i) cout << "1" ;
                    else if (j == end || (i == mid && j == mid)) cout << "2" ;
                    else cout << "3" ;
                }
            }
        cout << "\n" ; end-- ;
        }
    }

}
