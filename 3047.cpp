#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int sum=0, mom, child [3] ; cin >> mom ;
    for (int i=0; i<2 ; i++) {
        cin >> child[i] ;
        sum += child[i] ;}
    
    child[2] = mom - sum ;
    sort (child, child+3) ;
    cout << child[2] << endl ;
}