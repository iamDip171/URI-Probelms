#include <iostream>
using namespace std ;

int main ()

{
    int x, y,i, num=0 ;
    
    cin >> x >> y ;
    
    if ( x > y ){
        if ( x%2 == 0 )
        {
        for ( i = x-1 ; i > y ; i=i-2 ) {
            num = num + i ;
           
          
        }
        }
        else {
            for ( i = x-2 ; i > y ; i=i-2 ) {
                num= num+i ;
               
            }
        }
        
        
    }
    else {
       if ( x%2 == 0 )
        {
        for ( i = x+1 ; i < y ; i=i+2 ) {
            num = num + i ;
            
        }
        }
        else {
            for ( i = x+1 ; i < y ; i=i+2 ) {
                num= num+i ; 
               
            }
        }
    }
     cout << num << endl ;
    
   return 0;  
    
}

        
        
   