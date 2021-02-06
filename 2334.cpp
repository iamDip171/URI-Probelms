#include <iostream>
 
using namespace std;
 
int main() {
 
    char n[1001] ; int a[1001], i;
    
    
        cin >> n ;
        while (n[i]){
            a[i] = (int)n[i] - 48 ;
            //if (a==-1) break ;
        
            //else if (a==0) cout << "0\n" ;
        
            //else cout << a-1 << "\n" ;
            cout << a[i] ; i++ ;}
    
 
    return 0;
}