#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int X ;
    double Y ;

    cin >> X >> Y ;

    double ans = X / Y ;

    cout << showpoint ;
    cout << fixed ;
    cout << setprecision (3) ;
    cout << ans << " km/l" << endl ;

 
    return 0;
}