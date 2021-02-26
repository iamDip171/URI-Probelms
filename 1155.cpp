#include <iostream>
#include <iomanip>
using namespace std ;

int main ()

{
   double i, sum=0 ;

   for ( i=1 ; i <= 100 ; i++)
   {
       sum =sum + 1/i ;
   }
   cout << fixed << setprecision(2) << sum << endl ;

}