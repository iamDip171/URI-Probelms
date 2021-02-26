#include <iostream>
using namespace std;

int main ()

{
    int x, y , num, ans= 0 ;

    cin >> x >> y ;


    if ( x > y ){
    for ( num = x ; num >= y ; num --)
    {
        if ( num % 13 != 0 )
        {
             ans= ans + num ;

        }
}

    }
    else if ( x < y){
        for ( num = x ; num <= y ; num ++)
    {
        if ( num % 13 != 0 )
        {
             ans= ans + num ;

        }
}
    }
      cout << ans << endl ;

}
