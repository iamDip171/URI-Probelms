#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int num, mon ;
    float hou, salary ;

    cin >> num >> mon >> hou ;

    cout << "NUMBER = " << num <<endl ;

    salary = mon * hou ;

    cout << showpoint ;
    cout << fixed ;
    cout << setprecision (2) ;
    cout << "SALARY = U$ " << salary <<endl ;

 
    return 0;
}