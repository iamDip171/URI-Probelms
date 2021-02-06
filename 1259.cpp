#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n, test ; cin >> n ;

    vector <int> v, v1 ;
    for (int i=0; i<n; i++){
        cin >> test ;

        if (test & 1) v1.push_back(test) ;
        else v.push_back(test) ;
    }

    sort (v.begin(), v.end()) ;
    sort (v1.begin(), v1.end(), greater<int>()) ;
    for (int i=0; i< v.size(); i++) cout << v[i] << "\n" ;
    for (int i=0; i < v1.size(); i++) cout << v1[i] << "\n" ;
}