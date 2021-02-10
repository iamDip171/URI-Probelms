#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main() {
 
    double x1, x2, y1, y2 ;

    cin >> x1 >> y1 >> x2 >> y2 ;

    double a = (x2 - x1) , b = (y2 - y1) ;

    double ans = sqrt ( a * a + b * b ) ;

    cout << showpoint ;
    cout << fixed ;
    cout << setprecision (4) ;
    cout << ans << endl ;

 
    return 0;
}