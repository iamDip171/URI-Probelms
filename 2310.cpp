#include <bits/stdc++.h>
using namespace std ;

void printAnswerFor2310(int num1, int num2) {
    cout << fixed << setprecision(2) << (num1 * 100.00)/num2 ;
}

int main ()
{
    int n, sumOfAtmpt[3] = {0,0,0}, sumOfSuccess[3]={0,0,0}, atmpt[5][5];
    string name ;
    cin >> n;
    while (n--) {
        cin >> name ;
        for (int i=0; i<2; i++) {
            for (int j=0; j<3; j++) {
                cin >> atmpt[i][j] ;
            }
        }
        sumOfAtmpt[0] += atmpt[0][0] ;
        sumOfAtmpt[1] += atmpt[0][1] ;
        sumOfAtmpt[2] += atmpt[0][2] ;
        sumOfSuccess[0] += atmpt[1][0] ;
        sumOfSuccess[1] += atmpt[1][1] ;
        sumOfSuccess[2] += atmpt[1][2] ;
    }

    cout << "Pontos de Saque: " ; 
    printAnswerFor2310(sumOfSuccess[0], sumOfAtmpt[0]);
    cout << " %.\n" ;
    cout << "Pontos de Bloqueio: " ;
    printAnswerFor2310(sumOfSuccess[1], sumOfAtmpt[1]); 
    cout << " %.\n" ;
    cout << "Pontos de Ataque: " ;
    printAnswerFor2310(sumOfSuccess[2], sumOfAtmpt[2]);
    cout << " %.\n" ;

    /*cout << sumOfSuccess[0] << "\n" ;
    cout << sumOfSuccess[1] << "\n" ;
    cout << sumOfSuccess[2] << "\n" ;*/
}