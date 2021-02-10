#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double time, speed ;

    cin >> time >> speed ;

    double ans = (time * speed) / 12 ;

    cout << showpoint ;
    cout << fixed ;
    cout << setprecision (3) ;
    cout << ans << endl ;

 
    return 0;
}