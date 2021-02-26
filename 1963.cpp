#include <iostream>
#include <iomanip>

using namespace std ;

int main()

{
    double a,b ;

    cin  >> a >> b ;

    if (a<=b)
    {
        double sum = (b-a)/a * 100.00 ;

        cout << fixed << setprecision(2) << sum << "%" << endl ;
    }

}
