#include <iostream>
using namespace std ;
int main ()
{
    long long int a,b,c ;
    cin >> a >> b >> c ;
    if ((a+b)>c && (b+c)>a && (c+a)>b){
        if (a==b && b==c)cout << "Valido-Equilatero\n" ;
        else if ((a!=b && b==c)|| (b!=c && c==a) || (a!=c && a==b)) cout << "Valido-Isoceles\n" ;
        else cout << "Valido-Escaleno\n" ;
        if ((a*a+b*b==c*c) || (a*a+c*c==b*b) || (b*b+c*c==a*a)) cout << "Retangulo: S\n" ;
        else cout << "Retangulo: N\n" ;
    }
    else cout << "Invalido\n" ;
}
