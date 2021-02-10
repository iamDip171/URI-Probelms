#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
   string name ;
    double A , B, total ;
    
    cin >> name >> A >> B ;
    
    total = ( B * .15 ) + A ;
    cout << showpoint ;
    cout << fixed ;
    cout << setprecision (2) ;
    cout << "TOTAL = R$ " << total <<endl ;
    
 
    return 0;
}