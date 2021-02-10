#include <iostream>
#include <iomanip>
#include <math.h>
#define pi 3.14159
 
using namespace std;
 
int main() {
 
   
     double A, B, C ;

    cin >> A >> B >> C ;

    double ans1 = .5 * A * C ;
    double ans2 = pi * C * C ;
    double ans3 = .5 * (A + B) * C ;
    double ans4 = pow (B, 2) ;
    double ans5 = A * B ;


    cout << showpoint ;
    cout << fixed ;
    cout << setprecision (3);
    cout <<"TRIANGULO: " << ans1 << endl ;
    cout << "CIRCULO: " << ans2 << endl ;
    cout << "TRAPEZIO: " << ans3 << endl ;
    cout << "QUADRADO: " << ans4 << endl ;
    cout << "RETANGULO: " << ans5 << endl ;
    return 0;
}