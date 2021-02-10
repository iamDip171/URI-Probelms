#include <iostream>


using namespace std;

int main ()

{
    int N ;
    
    cin >> N ;
    
    int A = N / 365 ;
    int B = N % 365 ;
    int C = B / 30 ;
    int D = B % 30 ;
    
    cout << A << " ano(s)" << endl ;
    cout << C << " mes(es)" <<endl ;
    cout << D << " dia(s)" << endl ;
    
    
}    
    
    
    
    
  