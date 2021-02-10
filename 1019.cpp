#include <iostream>
#include <iomanip>
using namespace std;

int main ()

{
    int N ;
    
    cin >> N ;
    
   int A = N / 60 ;
   int B = N % 60 ;
   
   int C = N / 60 ;
   int D = N % 60 ;
   int E = C / 60;
   int F = C % 60 ;
    
    if ( N > 3600 )
    {
        cout << E << ":" << F << ":" << D << endl ;
    }
    
    else 
    {
        cout << "0" << ":" << A << ":" << B << endl ;
    }    
}    

