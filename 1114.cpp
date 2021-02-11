#include <iostream>
#include <iomanip>

using namespace std ;

int main()

{
   int x, i ;

   while (1)
   {
       cin >> x ;

       if ( x== 2002 )
       {
           cout << "Acesso Permitido\n" ;
           break ;
       }
       else {
        cout << "Senha Invalida\n" ;
       }
   }


}
