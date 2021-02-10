#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std ;

int main()
{
  int A, B, C, D ;
  
  cin >> A >> B >> C >> D ;
  
  int x1 = C + D ;
  int x2 = A + B ;
  
  if ( B > C && D > A && x1 > x2 && C > 0 && D > 0 && A % 2 == 0 )
  {
      cout << "Valores aceitos" << endl ;
  }
  else 
  {
      cout << "Valores nao aceitos" << endl ;
  }
}
