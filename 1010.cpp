#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int A, B, D, E ;
    double C, F, total ;
    
    cin >> A >> B >> C  >> D >> E >> F ;
    
    total = B * C + E * F ;
    
    cout << showpoint;
    cout << fixed ;
    cout << setprecision (2) ;
    cout << "VALOR A PAGAR: R$ " << total <<endl ;
    
 
    return 0;
}