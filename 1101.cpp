#include <iostream>

using namespace std ;

int main ()
{
    int M, N, i,  sum=0 ;

    while(1){

        cin >> M >> N ;

        if ( M > N && M > 0 && N > 0 ){
            for ( i=N ; i<= M; i++ ){

                cout << i << " " ;
                sum = sum + i;
            }
         cout << "Sum=" << sum << endl ;
                sum = 0 ;

     }


        if ( M < N && M > 0 && N > 0 ) {
            for ( i=M ; i<= N ; i++ ){

                cout << i << " " ;
                sum = sum + i;
            }
            cout << "Sum=" << sum << endl ;
            sum=0 ;
        }

        if ( M <= 0 || N <= 0 ){
            break ;
       }


    }
}