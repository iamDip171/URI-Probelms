#include <iostream>
using namespace std ;

int main()

{
    int N[20], X[20], i, j;

    for (i=0; i<20; i++)
    {
        cin >> N[i];
    }
      for ( j=0 ; j<20; j++)
    {

        X[j]=N[--i];
        cout << "N[" << j << "] = " << X[j] << endl ;
    }

}
