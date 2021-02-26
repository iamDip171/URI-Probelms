#include <iostream>
using namespace std ;

int main ()

{
    int N, i ;
    string x ;

    cin >> N ;

    while (N--)
    {
        cin >> x >> i ;

        if (x=="Thor") cout << "Y\n" ;
        else cout << "N\n" ;
    }

}
