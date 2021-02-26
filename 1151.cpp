#include <iostream>
using namespace std ;

int main ()

{
    int N, i, sum=0, s1=1, sum1 ;

    cin >> N ;

    cout << "0" ;

    for ( i=0 ; i < N-1 ; i++ ){


        sum1= sum + s1 ;

        cout <<" " << sum1;

        s1 = sum ;
        sum = sum1 ;


    }
    cout << "\n" ;

}