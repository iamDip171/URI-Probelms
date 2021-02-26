#include <iostream>
#include <iomanip>
using namespace std;

int main ()

{
    int N, i=0 ;
    double sum=0 ;


    while(1)
    {
        cin >> N ;
        if ( N > 0)
        {
            sum=sum+N ;
             i++;
        }
        else if (N<0) {
            break ;
        }

    }
    cout << fixed << setprecision(2) << sum/i << endl;

}
