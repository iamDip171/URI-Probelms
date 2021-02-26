#include <iostream>
using namespace std ;

int main()

{
    int N,i ;

    for (i=0 ; i<10; i++)
    {
        cin >> N ;
        if (N<=0) cout << "X[" << i << "] = " << "1" << endl ;
        else cout << "X[" << i << "] = " << N << endl;
    }


}