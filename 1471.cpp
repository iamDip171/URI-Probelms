#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n, retrn, j=0, flag =0 ;
    int test[1000] ;

    while (cin >> n >> retrn ) {
    for (int i=0; i<retrn; i++){
        cin >> test[i] ;
    }
    sort (test, test+retrn) ;
    //cout << test[2] << endl ;

    for (int i=1; i<=n; i++){
        if (i == test[j]) {flag++ ; j++;}
        else {cout << i << " " ; }
        
    }
    //cout << "\n" << flag ;
    if (flag==n) cout << "*\n" ;
    else cout << "\n" ; j=0 ; flag=0 ;
    }
}

/*
{
 int n, r, x;
 bool ver;

 while(cin >> n >> r)
 {
  vector<int> v(n + 1);
  ver = false;

  for (int i = 0; i < r; ++i)
  {
   cin >> x;
   v[x] = 1;
  }

  for (int i = 1; i <= n; ++i)
  {
   if(v[i] == 0){
    ver = true;
    cout << i << " ";
   }
  }

  if(ver == false)
   cout << '*'; 

  cout << endl;
 }

 return 0;
}
*/