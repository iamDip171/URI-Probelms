#include <iostream>
using namespace std ;

int main ()

{
    int x,y,i, j=1, k=0, l=0, n=0 ;

    while (1)
    {
        cin >> x >> y ;
        cin >> i ;
        if (i==1) {
            cout << "Novo grenal (1-sim 2-nao)\n" ;
            j++ ;
        }
        if (x>y) k++ ;
        if (x<y) l++ ;
        if (x==y) n++ ;

        if (i==2)
        {
            cout << "Novo grenal (1-sim 2-nao)\n" ;
            break ;
        }

    }
    cout << j << " grenais\n" ;
    cout << "Inter:" << k << endl;
    cout << "Gremio:" << l << endl ;
    cout << "Empates:" << n << endl ;
    if (k>l) cout << "Inter venceu mais\n" ;
    else if (k<l) cout << "Gremio venceu mais\n" ;
    else cout <<  "Não houve vencedor\n" ;



}
