#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int hight, pipes, remind=1 ; cin >> hight >> pipes ;
    int test[pipes] ;
    for (int i=0; i<pipes; i++){
        cin >> test[i] ;

    }

    for (int i=0; i< pipes - 1; i++){
        if ((abs(test[i+1] - test[i])) <= hight) continue ;
        else{
            cout << "GAME OVER\n" ;
            return 0 ;
        }
    }

    cout << "YOU WIN\n" ;
}