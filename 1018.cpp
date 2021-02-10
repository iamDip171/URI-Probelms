// Example program
#include <iostream>


using namespace std;

int main ()

{
    int N ;
    
    cin >> N ;
    
        
        int A = N / 100 ; 
        int B = N % 100 ; // mod of 100
        int C = B / 50 ;
        int D = B % 50 ; // mod of 50
        int E = D / 20 ;
        int F = D % 20 ; // mod of 20
        int G = F / 10 ; 
        int H = F % 10 ;
        int I = H / 5 ;
        int J = H % 5 ;
        int K = J / 2 ;
        int L = J % 2 ;
        int M = L / 1 ;
    
     if (N > 0 && N < 1000000)
    {
    cout << N << endl ;
    cout << A << " nota(s) de R$ 100,00" << endl ;
    cout << C << " nota(s) de R$ 50,00" << endl ;
    cout << E << " nota(s) de R$ 20,00" << endl ;
    cout << G << " nota(s) de R$ 10,00" << endl ;
    cout << I << " nota(s) de R$ 5,00" << endl ;
    cout << K << " nota(s) de R$ 2,00" << endl ;
    cout << M << " nota(s) de R$ 1,00" << endl ;
    
    }
    
    
}    
    
 