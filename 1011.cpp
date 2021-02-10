#include <iostream>
#include <iomanip>
#include <math.h>
#define pi 3.14159
 
using namespace std;
 
int main() {
 
   double R ;

    cin >> R ;

    double ans = (4.0/3) * pi * pow (R, 3) ;


    cout << showpoint ;
    cout << fixed ;
    cout << setprecision (3);
    cout << "VOLUME = " << ans << endl ;

 
    return 0;
}